string=input("Enter")
sub_string=input("Enter substring")
c=0
for i in range(len(string)):
    for j in range(len(sub_string)):
        if(sub_string[j]==string[i]):
            #for(i=k,j=l;i<len(sub);i++,j++)
            k=i
            q=j
            for m in range(len(sub_string)):
                if(string[k]!=sub_string[q]):
                    break;
                k+=1
                q+=1
            if(m==len(sub_string)-1):
               print("found")
               c=1
if(c==0):
    print("Not found")
