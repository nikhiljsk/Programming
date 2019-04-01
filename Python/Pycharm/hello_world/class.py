class Student:
    def __init__(self,id):
        print(id);

    def __str__(self):
        return "string"

    def add_name(self,name):
        self.name=name
        return self.name

student=Student(332)
student1=student.add_name("jsk")
print(student1)
print(student)
st=Student(112)
str=student.add_name("nikhil")
print(str)
print(student)