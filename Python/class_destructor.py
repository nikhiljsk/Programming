class Point:
    def __init__(self,x=0,y=0):
        self.x=x
        self.y=y
        print("constructor called")
        
    def __del__(self):
        class_name=self.__class__.__name__
        print(class_name,"Destroyed")

    def show(self):
        print("x=",self.x,'y=',self.y)

pt1=Point()
pt2=pt1	        #both have the same id
#print(pt2.x)
print(id(pt1))  
print(id(pt2))
del pt1
pt2.show()
del pt2             #destructor is only called once and only in this case
                    #if id of objects are different then destructor is called twice

