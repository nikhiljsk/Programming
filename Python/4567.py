from tkinter import *

root = Tk()

v = IntVar()
v.set(1)  # initializing the choice, i.e. Python

languages = [
    ("Python",1),
    ("Perl",2),
    ("Java",3),
    ("C++",4),
    ("C",5)
]

def ShowChoice():
    print(v.get())

Label(root, 
      text="""Choose your favourite 
programming language:""",
      justify = LEFT,
      padx = 20).pack()
Radiobutton(root,
            text=languages).pack()

