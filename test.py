def evenCount(n:list):
    c=0
    for i in n:
        if(not i&1):
            c+=1
    return c

# Your code here
n=int(input())
l=list(map(int,input().split()))
l.sort() 
x=0
for i in l:
    if(not i&1):
        x=i
        break

y=max(l) if evenCount(l)>1 else l[-2]
while(evenCount(l)>=1 and x//2<y*2):

    if(x!=y):
        l[l.index(y)]=2*y
        l[l.index(x)]=x//2
    else:
        l[l.index(y)]=2*y
        l.reverse()
        l[l.index(x)]=x//2

    l.sort() 
    for i in l:
        if(not i&1):
            x=i
            break
    y=max(l) if evenCount(l)>1 else l[-2]

    # print(l)
    # print(x,y)

print(sum(l))

'''
2,3,4
3,1,8, x=2,y=4
4,6,1 x=8, y=3
2,12,1 x=2,y=12
1,24,1 #sum

1,2,3,4,5
10,1,1,3,4 x=2,y=5
20,1,1,3,2 x=4,y=10
40,1,1,3,1 x=2,y=20
46 #sum
'''
