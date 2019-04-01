n = int(input("Enter a number"))
rev = 0
while n != 0:
    a = int(n % 10)
    rev = rev*10+a
    n = int(n/10)

print(rev)

# 
