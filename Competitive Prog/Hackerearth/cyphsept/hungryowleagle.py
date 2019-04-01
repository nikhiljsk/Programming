n = int(input())
mistakes = 0
correctdict = {}
for i in range(n):
    x, s = input().split()
    correctdict[x] = s
for i in range(n):
    x,s = input().split()
    if sorted(correctdict[x]) != sorted(s):
        mistakes += 1
        
print(mistakes)