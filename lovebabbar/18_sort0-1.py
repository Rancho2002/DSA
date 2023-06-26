def sort01(arr):
    i=0
    j=len(arr)-1
    while(i<j):
        if(arr[i]==0):
            i+=1
        elif(arr[j]==1):
            j-=1
        else:
            arr[i],arr[j]=arr[j],arr[i]
    return arr


# arr=[0,1,0,0,1,1,0,0,0]
arr=[1,1,1,1,1,0,0,0,0]
print(arr)
print(sort01(arr))

