t=int(input().strip())
while t>0:
    counter=0
    a,b=input().split()
    a,b=int(a),int(b)
    for i in range(int(a**(0.5)),int(b**(0.5))+1):
        if (i**2) in range(a,b+1):
            counter+=1
    print(counter) 
    t-=1
