a=open('123.txt','r')
b=open('234.txt','w')
b.write(a.read(10))
b.close()
b=open('234.txt','r')
print(b.read())
b.close()