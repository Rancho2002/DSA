def findTriplets(arr, n, s):
    
    # Write your code here.
    arr.sort()
    l=[]
    j=1
    k=n-1
    for i in arr:
        temp=[]
        reqSum=s-i
        while(j<k):
            # print(reqSum,arr[j],arr[k])
            if(arr[j]+arr[k]==reqSum):  
                temp.extend([i,arr[j],arr[k]])
                # print(temp)
            if temp not in l and temp!=[]:
                l.append(temp)
            j+=1
            k-=1
            temp=[]
    return l

# print(findTriplets([10, 5, 5, 5, 2],5,12))
