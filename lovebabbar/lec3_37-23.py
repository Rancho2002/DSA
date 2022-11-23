count=1
num=int(input())

'''
4
****
****
****
****
'''
def pattern1(n):
    for i in range(n):
        for j in range(n):
            print("*",end="")
        print()
'''
4
1  1  1  1
2  2  2  2
3  3  3  3
4  4  4  4
'''
def pattern2(n):
    for i in range(1,n+1):
        for j in range(1,n+1):
            print(i," ",end="")
        print()

def pattern3(n):
    global count #! important
    for i in range(n):
        for j in range(n):
            print(count," ",end="")
            count+=1
        print()
'''
5
*
**
***
****
*****
'''
def pattern4(n):
    for i in range(1,n+1):
       print("*"*i)
'''
5
1
22
333
4444
55555
'''
def pattern5(n):
    for i in range(1,n+1):
        print(str(i)*i)

'''
6
1
12
123
1234
12345
123456
'''
def pattern6(n):

    for i in range(1,n+1):
        for j in range(i):
            print(j+1,end="")
        print()

# pattern2(n)
# pattern3(num)
# pattern4(num)
# pattern5(num)
pattern6(num)
