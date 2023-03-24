# https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=2

def getPivot(arr,n):
    s=0
    e=n-1
    mid=s+(e-s)//2
    while(s<e):
        if(arr[mid]>=arr[0]):
            s=mid+1
        else:
            e=mid

        mid=s+(e-s)//2 # (s+e)/2 10^6+(10^7-10^6)
    return s

def findPosition(arr, n, k):

	# Write your code here
	pivot=getPivot(arr,n)
	s1=0
	l1=pivot-1
	s2=pivot
	l2=n-1
	while(s1<=l1):
		m=s1+(l1-s1)//2
		if(arr[m]==k):
			return m
		elif(arr[m]<k):
			s1=m+1
		else:
			l1=m-1
	
	while(s2<=l2):
		m=s2+(l2-s2)//2
		if(arr[m]==k):
			return m
		elif(arr[m]<k):
			s2=m+1
		else:
			l2=m-1
	return -1









	


	