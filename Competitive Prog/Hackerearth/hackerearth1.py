n=int(input())
ls=[]
c=0
z=[]
for i in range(n):
    s=input()
    z=s.split()
    k=int(z[0])
    l=z[1]
    ls.append(l)

    
for i in range(n):
    s1=input()
    z1=s1.split()
    k=int(z1[0])
    l= z1[1]
    if(sorted(l)!=sorted(ls[k-1])):
        c+=1
print(c)
