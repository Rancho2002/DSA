def findArraySum(a, n, b, m):
    # Write your code here.
    i=n-1
    j=m-1
    carry=0
    ans=[]
    while(i>=0 and j>=0):
        v=a[i]+b[j]+carry
        ans.append(v%10)
        carry=v//10
        i-=1
        j-=1

    while(i>=0):
        v=a[i]+carry
        ans.append(v%10)
        carry=v//10
        i-=1
    
    while(j>=0):
        v=b[j]+carry
        ans.append(v%10)
        carry=v//10
        j-=1

    while(carry!=0):
        v=carry
        ans.append(v%10)
        carry=v//10
    
    ans.reverse()
    return ans