#!/bin/python3

import sys
n,m=input().strip().split()
n,m=int(n),int(m)
a=[int(x) for x in input().split()]
b=[int(x) for x in input().split()]
counter=0
temp=a[-1]
var=1
while temp<=b[0]:
    var=1
    for i in a:
        if temp%i!=0:
            var=0
            break
    for j in b:
        if j%temp!=0:
            var=0
            break
    temp+=a[-1]
    if var==1:
        counter+=1
print(counter)
