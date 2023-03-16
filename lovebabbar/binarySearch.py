def binarySearch(arr,key):
    start=0
    end=len(arr)-1
    mid=(start+end)//2

    while(start<=end):
        if(arr[mid]==key):
            return mid
        elif(key<arr[mid]):
            end=mid-1
        elif(key>arr[mid]):
            start=mid+1

        mid=(start+end)//2
    return -1

a=[1,2,3,4,5]

print(binarySearch(a,int(input())))