class employee:
    ec=0
    def __init__(self,n):
        self.name=n
        employee.ec+=1         #if self.ec is used 'ec' scope is valid till current object instance
    def empcount(self):
        print("%d" % employee.ec)    #if self.ec is used output will be "1 1 1"

obj1=employee('abc')
obj1.empcount()
obj2=employee('def')
obj2.empcount()
obj3=employee('hig')
obj3.empcount()
