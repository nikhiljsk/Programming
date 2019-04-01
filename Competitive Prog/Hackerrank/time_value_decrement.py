k = int(input().strip())
time=1
value=3
while True:
    time=time+value
    value=value*2
    if time>k:
        break
print(time-k)
