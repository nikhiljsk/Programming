a=open('123.txt','w')   #Write mode
print(a.write('this is nikhil jsk'))
a.write('\nhello')
print(a)
a.close()
b=open('123.txt','r')   #Read mode with Relative paths
print(b)
#print(b.read())
for i in b.read():
    #if i!='\n':
        print(i,end="")
b.close()
c=open('G:\\Programming\\Python\\1.py','r')     #Absolute Path
print("hh")
print(c.read(5))        #The pointer will now point to the 6th position
print(c.read(5))
c.close()
d=open('123.txt','a')   #Append mode
d.write('this is to append')
d.close()
d=open('123.txt','r')
#print(d.readline())    #Reading the first line in the file and pointer is changed
print(d.readlines())    #Reading the file line by line and storing in a list
d.close()
d=open('123.txt','r')
d.seek(4)               #Changing position using SEEK function
print(d.tell())         #Printing the position of the pointer
print(d.read())         #Reading from the resultant position of pointerd
d.close()
x=123
y=667
z=1.23
d=open('123.txt','a')
d.write(str(x))         #integer value is changed to string to be written in file
d.close()
d=open('123.txt','a')
d.write('%d'%x)         #writing integer values in a file using format specifier
d.write('%-8d'%y)       #Trailing spaces
d.write('%8d'%y)        #giving specifiers with numbers to get leading spaces
d.write('%d %d %2.2f' %(x,y,z))    #multiple specifiers
d.close()
