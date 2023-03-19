class Solution:
    def pivotIndex(self, arr: List[int]) -> int:
        n=len(arr)
        prefix=[0]*n
        suffix=[0]*n
        prefix[0]=arr[0]
        for i in range(1,len(arr)):
            prefix[i]=prefix[i-1]+arr[i] # 1 8 11 17 22 28

        suffix[n-1]=arr[n-1]
        for i in range(n-2,-1,-1):
            suffix[i]=suffix[i+1]+arr[i] # 28 27 20 17 11 6

        for i in range(n):
            if(prefix[i]==suffix[i]): 
                return i
        return -1