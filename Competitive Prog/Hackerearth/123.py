str1=input()
c1=0
c2=0
for x in str1:
    x=ord(x)
    if x>=65 and x<=90:
        c1+=1
    elif x>=98 and x<=123:
        c2+=1
    x=chr(x)
    
print(c1,c2)
