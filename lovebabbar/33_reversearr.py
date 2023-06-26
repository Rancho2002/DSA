def reverseArray(arr, m):
    # Write your code here.
    s=m
    e=len(arr)-1
    while(s<=e):
        arr[s],arr[e]=arr[e],arr[s]
        s+=1
        e-=1
    # return arr


arr=[1 ,2 ,3 ,4 ,5 ,6]
(reverseArray(arr,3))
print(arr)