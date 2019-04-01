import h2o
h2o.init()

airlines_train_data = h2o.import_file("https://s3.amazonaws.com/h2o-airlines-unpacked/allyears2k.csv")

# Model Training
from h2o.estimators.gbm import H2OGradientBoostingEstimator
gbm_model = H2OGradientBoostingEstimator()
gbm_model.train(x=["Month", "DayOfWeek", "Distance"], y="IsArrDelayed", training_frame=airlines_train_data)

prediction = gbm_model.predict(airlines_train_data)    # prediction returns H2OFrame

print(gbm_model)    # find all the metrics required

import pandas as pd
df = prediction.as_data_frame()    # Convert from H2OFrame to DataFrame

model_path = h2o.save_model(model=gbm_model, path="/mymodel", force=True)

# airlines_model = h2o.load_model("/Users/nikhiljsk/mymodel/GBM_model_python_1548220728196_1")

def predict_new(Year, Month, DayofMonth, DayOfWeek, CRSDepTime, CRSArrTime, UniqueCarrier, FlightNum, CRSElapsedTime, Origin, Dest):
    new_data = {'Year':Year, 
                'Month':Month, 
                'DayofMonth':DayofMonth, 
                'DayOfWeek':DayOfWeek, 
                'CRSDepTime':CRSDepTime,
                'CRSArrTime':CRSArrTime, 
                'UniqueCarrier':UniqueCarrier, 
                'FlightNum':FlightNum, 
                'CRSElapsedTime':CRSElapsedTime, 
                'Origin':Origin, 
                'Dest':Dest}
    h2oFrame = h2o.H2OFrame()
    new_frame = h2oFrame.from_python(new_data)
    prediction = gbm_model.predict(new_frame)
    return prediction.as_data_frame()['predict'][0]

predict_new(2007, 12, 28, 3, 2, 2130, 21, 34, 22, "yes", "no")
# curl -KX GET http://127.0.0.1:54321/3/ImportFiles?path=\https://s3.amazonaws.com/h2o-airlines-unpacked/allyears2k.csv >> /Users/nikhiljsk/Desktop/out.json 
    
# curl -KX GET http://localhost:54321/3/ImportFiles?path=\https://s3.amazonaws.com/h2o-airlines-unpacked/allyears2k.csv >> /Users/nikhiljsk/Desktop/out.json 
    

# os.system('curl -KX \
#          GET http://127.0.0.1:54321/3/ImportFiles?path=\https://s3.amazonaws.com/h2o-airlines-unpacked/allyears2k.csv \
#          >> /Users/nikhiljsk/Desktop/out2.json')

# os.system(curl -KX  POST http://127.0.0.1:54321/3/ParseSetup --data 'source_frames=[\"http://s3.amazonaws.com/h2o-public-test-data/smalldata/flow_examples/arrhythmia.csv\"]' >> out.json)