from tkinter import *
root=Tk()
pic=PhotoImage(file='Walk.gif')
words="Thiis ist he text realted tot the \nfilesld of fpythotn is\nNikhil JSK"
w=Label(root,compound=CENTER,text=words,image=pic).pack(side='right')
root.mainloop()
