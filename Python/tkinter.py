from tkinter import *
root=Tk()
pic=PhotoImage(file="Walk.gif")
w=Label(root,text="Hello this Nikhil JSK.This is\na demonstration of \nTkinter whiich is GUI",padx=10,pady=10,justify=RIGHT).pack(side='left')
w1=Label(root,image=pic).pack(side='right')
root.mainloop()
