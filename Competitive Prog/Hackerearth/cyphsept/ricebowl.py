def max_possible(chairs):
    if chairs <= 2:
        return 0
    elif chairs%2 == 1:
        return (chairs+1)//2
    else: return chairs//2
    
t = int(input())
for i in range(t):
    n, k = [int(x) for x in input().split()]
    if k>max_possible(n):
        print("impossible")
    else:
        min = 0
        max = 0
        if k<=2:
            min = max = k
        else:
            max_empty = (n-4) - 2*(k-2)
            min_empty = (n-4) - 3*(k-2) 
            if min_empty<0:
                min_empty = 0
            if max_empty<0:
                max_empty = 0
            min = n-k-max_empty
            max = n-k-min_empty
        print(min, max)
                    