class employee:
    'This is class for storing the records of the employees'  #documentation of the class for info related to the class
                                                        #for multiple line documentation you can use triple quotes (""")
    def __init__(self):
        self.name='abc'
        self.salary=10
    def disp(self):
        print("Name",self.name,"Sal",self.salary)
    def __del__(self):
        class_name=self.__class__.__name__
        print("\nDestructor is called\n",class_name)

emp1=employee()
emp1.disp()
print(emp1.name)        #accessing by object outside the class meathods
#print("This is %d hello" % employee.salary)

print(emp1.__dict__)    #returns the variables with the attributes in a dictionary
print(emp1.__doc__)     #returns the documentation of the class
print(employee.__name__)  #returns the name of the class which does not work with class object
print(emp1.__class__)   #returns the name of the class with module type
print(emp1.__class__.__name__)  #returns the name of the class
print(emp1.__class__.__module__) #returns the module of the class
print(employee.__dict__)    #returns everything in the class
print(employee.__doc__)     #similar to emp1.__dic__
print(employee.__module__)  #similar to emp1.__class__.__name__

#emp1.__del__()  #calling the destructor
del emp1        #calling the destructor in another meathod
#emp1.disp()   #does not work since object is deleted
 
