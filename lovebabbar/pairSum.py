def pairSum(arr, s):
    # Write your code here.
    l=[]
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if(arr[i]+arr[j]==s):
                temp=[]
                temp.append(min(arr[i],arr[j]))
                temp.append(max(arr[i],arr[j]))
                l.append(temp)
    return sorted(l)