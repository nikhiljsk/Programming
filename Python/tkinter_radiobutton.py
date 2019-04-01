from tkinter import *

root = Tk()

v = IntVar()

Label(root,
      text="""Select any
      option""",
      justify = LEFT,
      padx = 20).pack()
Radiobutton(root,
            text="hello",
            padx = 20,
            variable=v,
            value=1).pack(anchor=W)
Radiobutton(root,
            text="Bye",
            padx = 20,
            variable = v,
            value=2).pack(anchor=W)
mainloop()
