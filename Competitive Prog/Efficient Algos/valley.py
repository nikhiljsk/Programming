# https://www.hackerrank.com/challenges/counting-valleys/problem

n=int(input().strip())
ar=input().strip()
#print(len(ar))
summ=0
temp=0
sea_level=0
counter=0
for i in ar:
    sea_level=sea_level+temp
    if i=="U":
        temp=1
    elif i=="D":
        temp=-1
    summ=summ+temp;
    #print(summ,sea_level);
    if summ==0 and sea_level<0:
        counter+=1
        summ=0
print(counter)
