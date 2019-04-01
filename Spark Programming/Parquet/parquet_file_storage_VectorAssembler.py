from pyspark.sql import SparkSession
from pyspark.ml.linalg import Vectors
from pyspark.ml.feature import VectorAssembler
from pyspark.sql.types import DoubleType
from pyspark.sql import SQLContext

spark = SparkSession.builder.appName('Basics').getOrCreate()
sc = spark.sparkContext
sqlContext = SQLContext(sc)

df = spark.read.format("csv").option("header", "true").load("./housing.csv")

df1 = df1.withColumn("PTRATIO", df["PTRATIO"].cast(DoubleType()))

assembler = VectorAssembler(inputCols=['RM', 'LSTAT', 'PTRATIO'], outputCol="nwe_MEDV")
output = assembler.transform(df1)

output.write.parquet("./pro.parquet")

df = sqlContext.read.parquet('./pro.parquet/j.snappy.parquet')
type(df)
df.take(5)