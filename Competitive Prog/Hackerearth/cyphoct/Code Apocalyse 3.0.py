def apples_count(n,apples,upgrade,sold):
    apples=apples+sold
    if apples>=upgrade:
        return apples,n-1
    else:
        return apples_count(n-1,apples,upgrade,sold)

t=int(input())
while t>0:
    n,apples,upgrade,sold=input().split()
    n,apples,upgrade,sold=int(n),int(apples),int(upgrade),int(sold)
    k=n
    n_upgraded=0
##    apples=apples//upgrade
    while(n>0):
        apples=apples-upgrade
        if apples>=0 and n>0:
            n_upgraded+=1
            n-=1
        else:
            apples+=upgrade
            apples,n=apples_count(n,apples,upgrade,sold)
    print(n_upgraded)
    t-=1
