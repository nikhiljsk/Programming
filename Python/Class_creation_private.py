class employee:
    def __init__(self,n,s,a):
        self.name=n
        self.salary=s
        self.__age=a
        self.x=a
    def disp(self):
        print("Details")
        print("Name=",self.name)
        print("Salary=",self.salary)
        print("Age=",self.__age)
    def xyz(self):
        #print(self.a)
        print(self.x)
emp=employee("Sun",200,23)
emp.disp()
print(emp.name)
print(emp.salary)
print(emp._employee__age)
#print(emp1.__age)


#getattr(obj,name[,default])
#hasattr(obj,name)
#setaatr(obj,name,value)
#delattr(obj,name)
print("\n\n")
print(hasattr(emp,"name"))
print(hasattr(emp,"phone"))
print(getattr(emp,"name"))
#print(get(attr(emp,"phone"))   #Error
setattr(emp,"name","Moon")
emp.disp()
emp.xyz()
delattr(emp,"salary")
print('deleted')
print(emp.name)
#print(emp.salary)          #Error
