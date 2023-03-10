'''
5
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
'''
a=int(input())

for i in range(a):
    for j in range(1,a-i+1):
        print(j,end=" ")
    for k in range(0,i*2):
        print("*",end=" ")
    for t in range(a-i,0,-1):
        print(t,end=" ")
    print()

