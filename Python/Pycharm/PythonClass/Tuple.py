from random import *


def swap(a, b):
    return b, a  # Multiple values can be returned using tuple

a = 5
b = 4
# print(swap(a, b))
a, b = swap(a, b)
print(a, b)
v = 9
m = 7


def swap_dup(x, y):
    x, y = y, x  # Cloning happens here so actual parameters are not changed

swap_dup(v, m)
print(v, m)


# A tuple can be accessed just like list but it is immutable
# A particular index value cannot be changed
z = (1, 2, 3)
y = ('a', 'b', 'c')
x = ('a', 1)
print(x, y, z)
# Characters in tuple cannot be modified but can be replaced
k = ('k',) + x + y[1:]  # String slicing
print(k)
j, s = (1, 2)
print(j, s)

for i in range(10):
    p = random()  # If given 'import random' is used we should use random.random()
    print(p)
print(p*100//1)
print(randint(1, 100))


def in_bucket(t, low, high):
    count = 0
    for num in t:
        if low < num < high:
            count += 1
    return count

print("hello", in_bucket((1, 2, 3, 2, 2, 4, 6), 1, 4))
