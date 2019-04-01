class StudentID:

    count = 0

    def __init__(self):
        self.name = ""
        self.id = 0

    def __str__(self):
        return "This string is returned while creating an object"

    def input_user(self):
        self.name = input("Enter your name")
        self.id = int(input("Enter your ID"))
        self.count += 1

    def output_user(self):
        print(self.name, self.id, self.count)

    def __del__(self):
        print("This a parent destructor call called when the whole program is done")


class School:

    def __int__(self):
        print("This is derived class constructor")

    def display_school(self):
        print("School : RBS")

    def __str__(self):
        return "This is derived class"

    def __del__(self):
        return "This is derived destructor"

 # If constructor and destructor are used in derived class then the
 # constructor and destuctor are not called


class City(School, StudentID):
    def display_city(self):
        print("City : Vizag")
    def __del__(self):
        print('destructor called')

object_City = City()
object_City.input_user()
object_City.output_user()
object_City.display_school()

"""
object_School = School()
object_School.input_user()
object_School.output_user()
object_School.display_school()
print(object_School)

"""
