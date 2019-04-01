t=int(input())
while t>0:
    n=int(input())
    ar=[int(x) for x in input().split()]
    summ_total=0
    for i in range(len(ar)-1):
        summ=0
        for j in range(i+1,len(ar)):
            summ+=abs(ar[i]-ar[j])
        summ_total+=summ
    print(summ_total)
    t-=1
