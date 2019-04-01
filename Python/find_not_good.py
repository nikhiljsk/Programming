str=input("Enter a string")
re_not=str.find("not")
re_poor=str.find("poor")
if (re_not < re_poor):
    str=str.replace(str[re_not:(re_poor+4)],"good")  # 1--->temp = str[:re_not] + "good"  
    print(str)
else:
    print(str)
 # 1-->This won't work since the appended part is only displayed at the last and
 # the remaining part is left out.
