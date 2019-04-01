class father:
    def __init__(self):
        self.first_name=input("First name:")
        self.last_name=input("Last name:")     
    def input_father(self):
        self.first_name=input("First name: ")
        self.last_name="123"
        self.__priv="hak"                       #private variable
    def display(self):
        print("first name:",self.first_name)
        print("last name:",self.__last_name)

        
class son(father):                                  #inheritance
    def __init__(self):
        self.last_name=input("Enter your last name")
    def display(self,):
        print("first name:",self.first_name)    #accessing the parent variable
        print("last name:",self.last_name)



obj_son=son()
obj_son.input_father()
obj_son.display()
print('in main',obj_son.first_name)         #accessing public variables in parent class
print(obj_son._father__priv)      #accessing the private variable in father
