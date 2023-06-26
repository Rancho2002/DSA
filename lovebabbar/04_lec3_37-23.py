count = 1
num = int(input())

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
            print("*", end="")
        print()


'''
4
1  1  1  1
2  2  2  2
3  3  3  3
4  4  4  4
'''


def pattern2(n):
    for i in range(1, n+1):
        for j in range(1, n+1):
            print(i, " ", end="")
        print()


def pattern3(n):
    global count  # ! important
    for i in range(n):
        for j in range(n):
            print(count, " ", end="")
            count += 1
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
    for i in range(1, n+1):
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
    for i in range(1, n+1):
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

    for i in range(1, n+1):
        for j in range(i):
            print(j+1, end="")
        print()


'''
4
1
21
321
4321
'''


def pattern7(n):

    for i in range(1, n+1):
        for j in range(i, 0, -1):
            print(j, end=" ")
        print()


'''
4
AAAA
BBBB
CCCC
DDDD
'''


def pattern8(n):
    c = 65
    for i in range(n):
        for j in range(n):
            print(chr(c), end="")
        c += 1
        print()


'''
4
ABCD
ABCD
ABCD
ABCD
'''


def pattern9(n):
    for i in range(n):
        c = 65
        for j in range(n):
            print(chr(c), end="")
            c += 1
        print()


'''
4
ABCD
EFGH
IJKL
MNOP
'''


def pattern10(n):
    c = 65
    for i in range(n):
        for j in range(n):
            print(chr(c), end="")
            c += 1
        print()


'''
4
ABCD
BCDE
CDEF
DEFG
'''


def pattern11(n):
    c = 65
    for i in range(n):
        for j in range(n):
            print(chr(c), end="")
            c += 1
        print()
        c = 65+i+1


'''
3
A
BB
CCC
'''


def pattern12(n):
    c = 65
    for i in range(1, n+1):
        print(chr(c)*i)
        c += 1


def pattern13(n):
    c = 65
    for i in range(1, n+1):
        for j in range(i):
            print(chr(c), end="")
            c += 1
        print()


'''
4
D
C D
B C D
A B C D
'''


def pattern14(n):
    c = 65
    for i in range(1, n+1):
        for j in range(i, 0, -1):
            print(chr(c+n-j), end=" ")
        print()


'''
4
   *
  **
 ***
****
'''


def pattern15(n):
    for i in range(1, n+1):
        for j in range(n, i, -1):
            print(" ", end="")
        for k in range(i):
            print("*", end="")
        print()


'''
4
****
***
**
*
'''


def pattern16(n):
    for i in range(n):
        print("*"*(n-i))


'''
5
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 
'''


def pattern17(n):
    for i in range(n):
        for j in range(n-1, i, -1):
            print(" ", end=" ")
        for k in range(i+1):
            print(k+1, end=" ")
        for t in range(i, 0, -1):
            print(t, end=" ")
        print()


'''
*********
 *******
  *****
   ***
    *
'''
def pattern18(num):
    for i in range(num):
        for j in range(i):
            print(" ", end="")
        for j in range(2*(num-i)-1, 0, -1):
            print("*", end="")

        print()


# pattern2(num)
# pattern3(num)
# pattern4(num)
# pattern5(num)
# pattern6(num)
# pattern7(num)
# pattern8(num)
# pattern9(num)
# pattern10(num)
# pattern11(num)
# pattern12(num)
# pattern13(num)
# pattern14(num)
# pattern15(num)
# pattern16(num)
# pattern17(num)
pattern18(num)
