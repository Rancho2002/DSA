txt = input()

#your code goes here
l=txt.split(" ")
count=[]
for i in l:
    count.append(len(i))

tmp=max(count)

index=count.index(tmp)

print(l[index])


'''
ans = 0 
anslen=l[0].size 
for int i to n-1
   If l[i].size > anslen
      anslen= l[i].size 
      ans = i


Print l[ans]
'''