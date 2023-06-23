a=input()

s=0
e=len(a)-1
a=list(a)
while(s<e):
    a[s],a[e]=a[e],a[s]
    s+=1
    e-=1

s=""
for i in range(len(a)):
    s+=a[i]

print(s)