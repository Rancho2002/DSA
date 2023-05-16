def partition(arr,si,ei)->int:
 
    pivot=arr[si]

    count=0 # track a count how many element less than pivot #! in the range of si and ei

    for i in range(si,ei+1):
        if(arr[i]<pivot):
            count+=1

    pivot_index=si+count #!pivot always si+count instead of arr[count] because it is not necessary that si is always 0

    arr[si],arr[pivot_index]=arr[pivot_index],arr[si] # now pivot element at its right place

    while(si<ei):
        if(arr[si]<pivot):
            si+=1 # already in right place

        elif(arr[ei]>pivot):
            ei-=1 # already in right place
         
        else:
            arr[si],arr[ei]=arr[ei],arr[si]
            si+=1
            ei-=1
    return pivot_index

def quicksort(arr,si,ei):
    if(si>=ei):
        return 
    pivot=partition(arr,si,ei)
    quicksort(arr,si,pivot-1)
    quicksort(arr,pivot+1,ei)



arr=[5,2,8,9,3,1,7,6,2,-3,0]
ei=len(arr)-1
print(partition(arr,0,len(arr)-1))
print(arr) 
quicksort(arr,0,len(arr)-1)
print(arr)
        