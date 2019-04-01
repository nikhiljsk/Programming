a = 0
b = 1
print(a, "\n", b)
c = int(a+b)
while c < 50:
    print(c)
    a = b
    b = c
    c = int(a + b)
