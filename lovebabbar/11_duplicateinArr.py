from collections import Counter
def findDuplicate(arr):
    # Write your code here
    # ans=0
    # for i in range(len(arr)):
    #     ans^=arr[i]
    # for i in range(1,len(arr)):
    #     ans^=i
    ans=0
    for i,j in enumerate(arr):
        ans=ans^i^j
    return ans


    # arr=Counter(arr)
    # for i in arr:
    #     if(arr[i]==2):
    #         return i