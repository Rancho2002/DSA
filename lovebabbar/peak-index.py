def peakIndexInMountainArray(arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        s=0
        l=len(arr)-1
        m=s+(l-s)//2
        while(s<l):
            if(arr[m]<arr[m+1]):
                s=m+1
            else:
                l=m
            m=s+(l-s)//2
        return m
