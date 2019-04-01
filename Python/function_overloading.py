class vector:
    def __init__(self,a,b):
        self.a=a
        self.b=b

    def __str__(self):
        return "vector (%d %d)"%(self.a,self.b)

    def __add__(self,other):
        return (self.a + other.a, self.b + other.b)


    def __sub__(self,other):
        return vector(self.a-other.a,self.b-other.b)


v1=vector(2,10)
v2=vector(32,1)
print(type(v1+v2))
print(type(v2-v1))


##v1=v1.__add__(v2)
##print(v1)

##print(v1.__add__(v2))
