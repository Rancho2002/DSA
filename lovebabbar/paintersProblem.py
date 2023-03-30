def isPossible(boards:list,m:int,k:int)->int:
    temp=0
    student=1
    for i in boards: 
        if(temp+i<=m): # ! ei jaigata vul ho66ilo
            temp=temp+i
        else:
            student+=1
            # if(k>0 and i>=m):
            #     temp=i
            if(student>k or i>m):
                return False
            else:
                temp=i
    return True


def findLargestMinDistance(boards:list, k:int):
    # Write your code here
    # Return an integer
    s=0
    e=sum(boards)
    m=s+(e-s)//2
    ans=-1
    while(s<=e):
        if(isPossible(boards,m,k)):
            ans=m
            e=m-1
        else:
            s=m+1
        m=s+(e-s)//2
    return ans