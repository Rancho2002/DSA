class Solution:
    def singleNumber(self, nums: list[int]) -> list[int]:
        
        ans=nums[0]
        for i in nums[1:]:
            ans=ans^i
            
        i=0
        for i in range(1,33):
            if((ans>>i)&1==1):
                break
        
        a,b=0,0
        for j in range(0,len(nums)):
            if(nums[j]>>i)&1==1 :
                a= a ^ nums[j]
            else:
                b= b ^ nums[j]
        
        return [a,b]