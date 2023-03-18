def firstAndLastPosition(arr, n, k):

    # Write your code here
    # l=[]
    # try:
    #     l.append(arr.index(k))
    #     arr.reverse()
    #     l.append(n-1-arr.index(k))
    # except:
    #     l.append(-1)
    #     l.append(-1)
    
    l=[-1,-1]
    first=0
    last=n-1
    mid=first+(last-first)//2

    #first ocr
    while(first<=last):
        if(arr[mid]==k):
            l[0]=mid
            last=mid-1
        elif(arr[mid]<k):
            first=mid+1
        elif(arr[mid]>k):
            last=mid-1
        mid=first+(last-first)//2

    first=0
    last=n-1
    mid=first+(last-first)//2
    while(first<=last):
        if(arr[mid]==k):
            l[1]=mid
            first=mid+1
        elif(arr[mid]<k):
            first=mid+1
        elif(arr[mid]>k):
            last=mid-1
        mid=first+(last-first)//2
    return l

print(firstAndLastPosition([0 ,0 ,1,1, 2, 2 ,2, 2],8,2))