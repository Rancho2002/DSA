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

def morePrecise(n, rang, sqrtSol):
	factor=1
	ans=sqrtSol
	for _ in range(rang):
		factor=factor/10
		j=ans
		while(j*j<n):
			j=factor+j
			ans=j
	# return ans
	return format(ans,f".{rang}f")


if __name__=='__main__':
    n=int(input())
    ans=sqrtN(n)
    sol=morePrecise(n,3,ans)
    print(sol)
    # print(ans)


		