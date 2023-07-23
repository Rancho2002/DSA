class Solution:

    def countPrimes(self, n: int) -> int:

        if n<2:
            return 0
        
        cnt=0
        prime=[1]* (n+1)
        
        prime[0]=prime[1]=0

        for i in range(2,n):
            if prime[i]:
                cnt+=1
            
            for j in range(2*i,n, i):
                prime[j]=0
            

        # print(prime)
        return cnt


'''
comment about seive of eratosthenis how this code works

1. create a list of size n+1 and initialize all the values to 1
2. mark 0 and 1 as 0
3. now start loop from 2 to n
4. if prime[i] is 1 then increment the count
5. now start another loop from 2*i to n with step size i
6. mark all the values as 0
7. return the count

'''