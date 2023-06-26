def isPossible(arr,n,m,mid):
    page=0
    student=1
    for i in range(n):
        if(page+arr[i]<=mid):
            page+=arr[i]
        else:
            student+=1
            if(student>m or arr[i]>mid):
                return False
            else:
                page=arr[i]
    return True

def allocateBooks(arr, n, m):
    s=0
    e=0
    for i in arr:
        e+=i
    mid=s+(e-s)//2
    ans=-1
    while(s<=e):
        if(isPossible(arr,n,m,mid)):
            ans=mid
            e=mid-1
        else:
            s=mid+1
        mid=s+(e-s)//2
    return ans
    # return mid+1


arr=[25 ,46 ,28 ,49 ,24]
n=5
m=4
print(allocateBooks(arr,n,m))