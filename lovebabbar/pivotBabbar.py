# 8 10 17 1 3 4

def getPivot(arr,n):
    s=0
    e=n-1
    mid=s+(e-s)//2
    while(s<e):
        if(arr[mid]>=arr[0]):
            s=mid+1
        else:
            e=mid

        mid=s+(e-s)//2 # (s+e)/2 10^6+(10^7-10^6)
    return s

if __name__=='__main__':
    arr=[1,2,3,8,9,7]
    ans=getPivot(arr,len(arr))
    print(ans)