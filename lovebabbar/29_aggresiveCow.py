def isPossible(arr,k,m):
    initial=arr[0]
    count=1
    for i in range(1,len(arr)):
        if(arr[i]-initial>=m):
            initial=arr[i]
            count+=1
            if(count==k):
                return True #doing this error, that this if must be nested because as soon as count get equal, it should return true
    return False
            

def aggressiveCows(stalls, k):
    # Write your code here.
    stalls.sort()   
    s=0
    e=stalls[-1]
    m=s+(e-s)//2
    ans=-1
    while(s<=e):
        if(isPossible(stalls,k,m)):
            ans=m
            s=m+1
        else:
            e=m-1
        m=s+(e-s)//2
    return ans