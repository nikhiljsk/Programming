import string
x = "Minions like bananas"
print(len(x))
print(x[-1])
print(x[-1::-1])
y = ""
y = x  # Assignment not to be done like this?
print(y, x)
for char in y:
    print(char, end="")
print(type(char))  # rstrip?
print(x[0:7:2])  # String Slicing
print(x.split())  # list of words
print(x[1:-1])
z = "Hello,Master this is nikhil,jsk"
print(z.split(","))
print(x[:])
p = """Hello
World"""
print(p.strip())  # ????
if x == y:  # Comparision not to be done like this?
    print("equal")
else:
    print("Not equal")
if x < z:
    print("Lesser")
else:
    print("Greater")
print(x+" "+y)  # Concatenation
q = "Hello nikhil Hello jsk Hello"
print(q.rfind("Hello"))  # Location of the last occurence of string
print(q.find("Hello"))  # Location of string from the left hand side
# x[0] = "B"  This cannot be done since strings are immutable
# print(x)
# find() function manual
index = 0
while index < len(q):
    if q[index] == "n":
        print(index)
    index = index+1
print(q.count(q[0]))  # returns the number of times 'H' is repeated
v = str.find(q, "H")
print(q[v])  # If same character is returned that that character exists
print(string.ascii_uppercase.find("H"))  # ????????????????????
