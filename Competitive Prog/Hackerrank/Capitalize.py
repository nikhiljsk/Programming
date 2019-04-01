string=input()
lst=string.split()
lst_new=[]
for i in lst:
    if ord(i[0])>=97 and ord(i[0])<=123:
        char=chr(ord(i[0])-32)
        st=char+i[1:]
        lst_new.append(st)
    else:
        lst_new.append(i)

print(str(lst_new))
                             
