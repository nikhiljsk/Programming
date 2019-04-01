import h2o
h2o.init(nthreads=-1) 
airlines_model = h2o.load_model("/gbmModel")