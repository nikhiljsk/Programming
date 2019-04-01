class Student:
    def __init__(self):
        self.roll=0
        print('const')
    def student_input(self):
        self.name=input("Enter your name")
        self.roll=input("Enter your roll")

class result(Student):
    def __init__(self):
        super(result,self).__init__()    #calling the parent constructor 
        self.marks=input("Enter your marks")
    def show(self):
        print(self.name,self.roll,self.marks)

class report(result):
    def __init__(self):
        super(report,self).__init__()       #callling the parent constructor
        print("completed the child constructor")
    def show(self):         #overrides the parent function show()
        print('good',self.name,self.roll,self.marks)

res=report()    #since there is no constructor in child class the parent constuctor is called
res.student_input()
res.show()
        
