
def findArrayIntersection(arr: list, n: int, brr: list, m: int):
    # Write your code here
    # Return a list containing all the common elements in arr and brr.
    # ! two pointer approach
    x=y=0
    ans=[]
    while(x<n and y<m):
        if(arr[x]<brr[y]):
            x+=1
        elif(arr[x]==brr[y]):
            ans.append(arr[x])
            x += 1
            y += 1
        else:
            y+=1
    return ans
arr=[1,4,5]
brr=[3,4,5]

print(findArrayIntersection(arr,3,brr,3))
