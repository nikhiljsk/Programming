from collections import Counter
n=input().strip()
n=int(n)
bird_type=[int(x) for x in input().strip().split()]
freq=Counter(bird_type)
print(freq)
maxi=max(freq.values())
for k,v in freq.items():
    if v==maxi:
        print(k)
        break;
