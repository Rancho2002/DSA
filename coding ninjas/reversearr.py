def reverseArray(arr, m):
    # Write your code here.
    n=len(arr)
    j=0
    for i in range(m+1,n//2+1):
        arr[i],arr[n-1-j]=arr[n-1-j],arr[i]
        # print(arr[i],arr[n-1-j],arr)
        j+=1
    return arr
print(reverseArray([1 ,2 ,3 ,4 ,5 ,6],3))