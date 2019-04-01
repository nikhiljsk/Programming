n=int(input())
list=[]
dup_list=[]
for i in range(n):
    string=input()
    a,b=string.split()
    list.append(int(a))
    list.append(b)
    if(i<=n//2):
        dup_list.append(int(a))
        dup_list.append(b)
    
for i in range(0,len(list),2):
        for j in range(0,len(list),2):
            if list[i]<list[j]:
                temp=list[i]
                list[i]=list[j]
                list[j]=temp
                temp_str1=list[i+1]
                list[i+1]=list[j+1]
                list[j+1]=temp_str1
#print(list)
flag=0
for i in range(0,n,2):
    flag=0
    for j in range(0,n,2):
        if dup_list[j]==list[i] and dup_list[j+1]==list[i+1]:
            flag=1
            break
        else:
            flag=0
    if flag==1:
        print('-',end=" ")
    else:
        print(list[j],end=" ")
        
#for i in range(n//2+1,n,2):
 #   print(list[i],end=" ")
