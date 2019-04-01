    t = int(input())
    for i in range(t):
        n,m = [int(x) for x in input().split()]
        arr = [int(x) for x in input().split()]
        arr.sort()
        print(sum(arr[-(n-m):])-sum(arr[0:(n-m)]))
