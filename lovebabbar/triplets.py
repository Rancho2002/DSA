def findTriplets(arr, n, k):
    
    # Write your code here.
    l=[]
    temp=[]
    for i in range(n-2):
        for j in range(i+1,n-1):
            for x in range(j+1,n):
                if(arr[i]+arr[j]+arr[x]==k):
                    # print(arr[i],arr[j],arr[x],l)
                    s=sorted([arr[i],arr[j],arr[x]])
                    if(s not in l): 
                        l.append(s)
    return l

# ! TLE SOLUTION

n=5
arr=[10 ,5, 5, 5, 2]
k=12
# n=6
# arr=[1,2,3,1,2,3]
# k=6
findTriplets(arr, n, k)