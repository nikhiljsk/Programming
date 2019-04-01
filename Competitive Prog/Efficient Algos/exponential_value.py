def expo(x, n):
    if n == 0:
        return 1
    elif n%2 == 0:
        return expo(x*x, (n/2))
    else:
        return x * expo(x*x, (n//2))


x= int(input())
n = int(input())
print(expo(x, n))
