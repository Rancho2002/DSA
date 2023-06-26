# https://www.codingninjas.com/codestudio/problems/ayush-and-ninja-test_1097574?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
def isPossible(arr,n,mid):
    count=0
    day=1
    for i in arr:
        if(count+i<=mid):
            count+=i
        else:
            day+=1
            if(day>n or i>mid):
                return False
            else:
                count=i
    return True

def ayushGivesNinjatest(n, m, time):
    # Write your code here.
    s=0
    e=sum(time)
    mid=s+(e-s)//2
    ans=-1
    while(s<=e):
        if(isPossible(time,n,mid)):
            ans=mid
            e=mid-1
        else:
            s=mid+1
        mid=s+(e-s)//2
    return ans
