from pyspark.sql import SparkSession
spark = SparkSession.builder.appName('Basics').getOrCreate()
df = spark.read.csv('./housing.csv')
df.show()
df.describe().show()
df.printSchema()
df.columns

from pyspark.sql.types import StructField, StructType, IntegerType, StringType

sch = [StructField('age', IntegerType(), True) ,
       StructField('name', StringType(), True)]

df = spark.read.json('people.json', schema=sch)
df.printSchema()

df.select(['age', 'name']).show()    # selects a column

df.head(2)    # returns two rows

df.withColumn('new', df['age']*2).show()    # add a new column
df.withColumnRenamed('old', 'new')    # rename a column

df.filter("Close < 100").select(['Open', 'Close']).show()
df.filter(df['Close' < 100]).select(['Open', 'Close']).show()
df.filter( (df['Close']<200) & ~(df['Open']>200) ).collect()    # returns a list with row object and parentisis is necessary
# rows can inturn be used to convert into dictionary and have count as well





