str=input("Enter a string")
if str[-3:]!="ing" and len(str)>=3:
    str=str+"ing"
    print(str)
elif len(str)<3:
    print(str)
elif str[-3:]=="ing":
    str=str+"EE"
    print(str)
