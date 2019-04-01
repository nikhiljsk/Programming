a=[
    {"name":"nikhil","roll":12,"feedback":None},
    {"name":"anil","roll":23,"feedback":None},
    {"name":"raol","roll":1,"feedback":"Behaves like johnny"}

]
for i in range(3):
    print(a[i]["name"]);

#   ab=a[0]["last_name"];       This returns an error...so

ab=a[0].get("last_name","last_name not found");
print("The value of ab is ",ab," So this is the value");