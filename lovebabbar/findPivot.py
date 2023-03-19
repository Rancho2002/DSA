class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        n = len(nums)
        p = [0] * n
        s = [0] * n
        p[0] = nums[0]
        for i in range(1, n):
            p[i] = p[i-1] + nums[i]
        s[n-1] = nums[n-1]
        for i in range(n-2, -1, -1):
            s[i] = s[i+1] + nums[i]
        for i in range(n):
            if p[i] == s[i]:
                return i
        return -1
