b={"a": "Rahul", "b": "sahil"}
print(b)
print(b["a"])
d={'a':12, 'c':34, 'b':56, 'd':78}
#z=sorted([v,k for k,v in d.items()])
#print(z)
print(d)
del d['c']
print(d)
d['c']=34   #values are mutable but the keys  inside the dictionary are not mutable
print(d)
print(len(d))

#Difference between function and meathod
#Function---keys(123)
#Meathod----123.key()

print(d.keys())
for i in d.keys():
    print(i)
print(d.values())
print(d.items())
print(sorted(d))
t=d.items()
print('hey')
print(sorted(t))
print("Meathod 1")
b=d.keys()
c=d.values()
k=zip(b,c)
print("zip")
print(k)
e=k
print(e)
a=sorted(k)
print(a)
print(k)

print("Aliasing and copying")
e=d         #Aliasing
print(e is d)
print(e)
e['a']=1234
print(e)
print(d)
print("copy")
f=d.copy()  #Copy
print(f is d)
f['c']=789
print(f)
print(d)

#Sparse matrix
a={(0,3):1,(2,1):2,(4,3):3}
print(a)
print(a[(0,3)])

#print(a[(0,0)])  #This cannot be used since (0,0) is not occupied
print(a.get((0,0),0))   #Used to store a temporary value in a particular place.
    #This can used in place of the above command and it does not change the dictionary 'a'
print(a)
