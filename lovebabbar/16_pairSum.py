# def pairSum(arr, s):
#     # Write your code here.
#     l=[]
#     for i in range(len(arr)):
#         for j in range(i+1,len(arr)):
#             if(arr[i]+arr[j]==s):
#                 temp=[]
#                 temp.append(min(arr[i],arr[j]))
#                 temp.append(max(arr[i],arr[j]))
#                 l.append(temp)
#     return sorted(l)

def pairSum(arr,s):
    l=[]
    x,y=0,1
    arr.sort()
    while(x<len(arr) and y<len(arr)):
        if(arr[x]+arr[y]==s):
                l.append([arr[x],arr[y]])
        if(arr[x]<arr[y]):
            x+=1
        elif(arr[x]==arr[y]):
             x+=1
             y+=1
            