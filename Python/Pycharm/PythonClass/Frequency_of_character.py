"""string = input("Enter a string")
c = ""
for char in string:
    if char not in c:  # can be used just like in statement with a conditional statement
        if char != " ":
            print(char, string.count(char))
            c = c + char
"""
string=input("Enter a string")
for char in range(97, 123):
    count = string.count(chr(char))
    if count != 0:
        print(chr(char), count)

# chr(65)==A ord('A')==65
