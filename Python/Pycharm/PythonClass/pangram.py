string = input("Enter a string")
string = string.lower()
c = ""
count = 0
for char in string:
    if char not in c:  # can be used just like in statement with a conditional statement
        if char >= 'a' and char <= 'z':
            print(char, string.count(char))
            c = c + char
            count = count + 1
if(count == 26):
    print("Pangram")
else:
    print("Not a Pangram")

