class Solution:
    
    #Function to find the maximum occurring character in a string.
    def getMaxOccurringChar(self,s):
        #code here
        arr=[0]*26
        
        for i in range(len(s)):
            if(s[i]>="a" and s[i]<="z"):
                number=ord(s[i])- ord("a")
                arr[number]+=1
            elif(s[i]>="A" and s[i]<="Z"):
                number=ord(s[i])- ord("A")
                arr[number]+=1
    
        maxi=-1
        ans=0
        for i in range(len(arr)):
            if(maxi<arr[i]):
                maxi=arr[i]
                ans=i
                
        return chr(ans+ord("a"))