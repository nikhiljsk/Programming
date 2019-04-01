t=int(input())
list_name=[]
list_reg=[]
list_cgpa=[]
z=[""]*3
for i in range(t):
    string=input()
    z=string.split()
    list_name.append(z[0])
    list_reg.append(int(z[1]))
    list_cgpa.append(int(z[2]))
c=0
maxi=max(list_cgpa)
loc=0
print("Students max")
for i in list_cgpa:
    if(maxi==i):
        print(list_name[c])
    c=c+1;
    
#similarly min and max and the avg


#3
#nikhil 1160 7.8
#gelli 1179  9.9
#hs 788 9.9
