string=input("Enter a string")
len=len(string)
if len<2:
    print("Empty String")
elif len>=2:
    st=string[0:2]+string[-1:-3:-1]
    print(st)

