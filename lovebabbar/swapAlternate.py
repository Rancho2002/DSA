def swapAlternate(arr):
    for i in range(0,len(arr)-1,2):
        arr[i],arr[i+1]=arr[i+1],arr[i]

l=list(map(int,input().split()))
print("Given array: ",l)
swapAlternate(l)
print("Changed array:",l)