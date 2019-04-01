a=open('123.txt','r')
b=open('234.txt','w')
while True:
    z=a.readline()
    if z=="":
        break;
    if z[0]!='#':
        b.write(z)
a.close()
b.close()
b=open('234.txt','r')
print(b.read())
