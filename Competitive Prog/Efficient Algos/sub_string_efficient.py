#find a substring in a given string efficiently

string=input("")
sub_string=input("")
max=len(string)-len(sub_string)
for i in range(max):
    for k in range(len(sub_string)):
        if sub_string[k]!=string[i+k]:
            i=i+1
            break
        else:
            location=i+1
#if(i<max):
    print(location)
#else:
#    print("not found")
