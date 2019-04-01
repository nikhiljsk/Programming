from pyspark.sql import SparkSession
spark = SparkSession.builder.appName('Basics').getOrCreate()
df = spark.read.json('people.json')

df.createOrReplaceTempView('basics')
res = spark.sql("SELECT * FROM people WHERE age=30")
res.show()