from collections import Counter
A=[2,2,2,2]
d={}
d=Counter(A)


count=0
arr=list(d.keys())
print(arr,d,d[0])
for i in arr:
    count+=d[i]//2
print(count)