# input: nikhilnks nksk
# output: nikhil$ks $ksk
str=input("Enter")
a = str[0]
count=0
for char in str:
    if count!=0 and char==a:
        str=str.replace(str[count:count+1],"$")
    count+=1
print(str)

