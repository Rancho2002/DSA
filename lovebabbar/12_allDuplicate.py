from collections import Counter
class Solution:
    # def findDuplicates(self, nums: List[int]) -> List[int]:
    def findDuplicates(self, nums):
        nums=Counter(nums)
        # print(nums)
        l=[]
        for i in nums:
            if(nums[i]>=2):
                l.append(i)
        return l