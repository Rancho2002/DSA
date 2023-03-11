import sys

def findUnique(arr, n) :
    ans=0
    #Your code goes here
    for i in arr:
        ans^=i
    return ans