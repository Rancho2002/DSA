def sqrtN(n):

	# Write your code here.
	if(n==1): return 1
	s=0
	r=n
	m=s+(r-s)//2
	while(s<=r):
		if(m*m>n):
			r=m-1
		else:
			s=m+1
		m=s+(r-s)//2		

	return m