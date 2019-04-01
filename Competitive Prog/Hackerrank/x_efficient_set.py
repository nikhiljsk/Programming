#!/bin/python3

import sys
n,m=input().split()
n,m=int(n),int(m)
a=[int(x) for x in input().split()]
b=[int(x) for x in input().split()]
counter=0
temp=a[-1]
var=1
z=max(len(a),len(b))
while temp<=b[0]:
    for i in range(z):
        if all(temp%a[i]==0) and all(b[i]%temp==0):
            counter+=1
        temp+=a[-1]
print(counter)
