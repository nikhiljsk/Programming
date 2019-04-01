n = int(input("Enter number of rows"))
m = int(input("Enter number of columns"))
mid = n//2
mid = mid+1
for i in range(1, n+1):
    for j in range(1, m+1):
        if i == mid:
            print("*", end="")
        elif i == 1 and j != 1 and j != m:
            print("*", end="")
        elif i == 1 and j == 1:
            print(" ", end="")
        elif i == 1 and j == m:
            print(" ", end="")
        elif j == 1 or j == m:
            print("*", end="")
        else:
            print(" ", end="")
    print("\r")
