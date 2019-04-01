T=int(input())
energy=['']
skill=[]
while T>0:
    x=input("energy and rivals")
    a,n=x.split()
    energy[0]=int(a)
    skill=[int(z) for z in input().split()]
    print(energy,skill)
    T-=1
    for i in skill:
        if energy>skill:
            energy=energy-skill
            
