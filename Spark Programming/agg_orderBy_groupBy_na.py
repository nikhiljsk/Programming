from pyspark.sql import SparkSession
spark = SparkSession.builder.appName('Basics').getOrCreate()
df = spark.read.json('people.json')

from pyspark.sql.functions import countDistinct, avg, stddev, format_number
df.select(countDistinct('Sales').alias('duplicate').select(format_number('std', 2 ).show())    # rounding off the after decimal points

df.orderBy('Sales').show()
df.orderBy(df['Sales'].desc()).show()

df.groupBy('Company').count().show()
df.agg({'Sale':'sum'}).show()

df.na.drop(thresh=2).show()    # if the row has atleast two null values it is dropped
df.na.drop(how="all").show()
df.na.drop(subset=['Sales']).show()   # if sales column has a null value it is dropped
df.na.fill('fill value').show()    # automatically fills the columns with string 
df.na.fill(0).show()
# fill the null values with mean of the data
df.na.fill(df.select(mean(df['Sales'])).collect()[0][0], subset=['Sales']).show()