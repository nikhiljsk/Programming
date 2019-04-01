T=int(input())
list=[]
for k in range(T):
    n=int(input())
    arr=[int(x) for x in input().split()]
    if len(arr)%2==0:
        mid=arr[(len(arr)//2)-1]
    else:
        mid=arr[len(arr)//2]
    if mid<max(arr):
        list.append("NO")
    else:
        list.append("YES")


for i in range(T):
    print("Case #",i+1,": ",list[i],sep="")
