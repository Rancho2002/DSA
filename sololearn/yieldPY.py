from typing import Generator

def printEven(n:list)->Generator: # returning an object
    for i in n: 
        if i%2==0:
            yield i


x=[i for i in range(101)]

for i in printEven(x):
    print(i,end=" ")
