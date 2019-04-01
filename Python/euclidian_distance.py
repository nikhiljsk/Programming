class dist:
    def __init__(self,x,y,z):
        self.x,self.y,self.z=x,y,z

    def __sub__(self,other):
        self.ans=(self.x-other.x)+(self.y-other.y)+(self.z-other.z)
        return s elf.ans

    def __str__(self):
        return ("%d %d %d %d" % (self.x,self.y,self.z,self.ans))

x,y,z=input("Enter three values in the same line").split()
s=dist(int(x),int(y),int(z))
x,y,z=input("Enter three values in the same line").split()
d=dist(int(x),int(y),int(z))
print(s-d)
print(s)             
