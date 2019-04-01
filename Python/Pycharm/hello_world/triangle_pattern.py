"""
   1
  1 2
 1 2 3
1 2 3 4
"""
n = int(input("Enter rows"))
for i in range(1, n+1):
    for k in range(1, n-i+1):
        print(" ", end="")
    for j in range(1, i+1):
        print(j, end=" ")
    print()