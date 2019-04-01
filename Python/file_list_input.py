o#files and excetions
#pickling

import pickle

f=open('1234.txt','w')
a=[1,2,3,4]
#f.write(a)  #does not work
f.write(str(a))
f.close()
f=open('1234.txt','r')
print(f.read())
f.close()

#using the pickle module
f=open('1234.txt','wb')         #opening file in binary mode similarly read binary also exists
pickle.dump(a,f)
f.close()
f=open('1234.txt','rb')
print(pickle.load(f))
f.close()
f=open('1234.txt','wb')
b=[6,6,7,8]
pickle.dump(a,f)
pickle.dump(b,f)
f.close()
f=open('1234.txt','rb')
print(pickle.load(f))           #Processes only one step at a time
print(pickle.load(f))
f.close()

