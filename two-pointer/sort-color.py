class Solution:
    # @param A : list of integers
    # @return A after the sort
    def swap(self, arr, i, j):
        arr[i], arr[j] = arr[j], arr[i]
        
    def sortColors(self, arr):
        n = len(arr)
        low = 0
        mid = 0
        high = n - 1
        
        while mid <= high:
            if arr[mid] == 2:
                self.swap(arr, mid, high)
                high -= 1
                
            elif arr[mid] == 1:
                mid += 1
            
            else:
                self.swap(arr, mid, low)
                mid += 1
                low += 1
