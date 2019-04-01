counter=[]
z=[]
s=input()
for i in range(len(s)):
    if (65<=ord(s[i])<=90) or (97<=ord(s[i])<=122):
        if s[i] not in z:
            counter.append(s[i])
        z.append(s[i])

if len(counter)==26:
    print("pan")
else:
    print('not')
