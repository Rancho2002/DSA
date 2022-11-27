print(100 & 1, 10 & 1, 1 &1 )
# Decimal to binary
n=int(input("Enter decimal number: "))
ans1=0
i=0
while(n!=0):
    #getting bits
    bits=n&1
    ans1=bits*pow(10,i)+ans1
    n=n>>1
    i+=1
print("Its binary equivalent is",ans1)

m=int(input("Enter binary number: "))
ans2=0
j=0
while(m!=0):
    digit=m%10
    ans2=digit*pow(2,j)+ans2
    m=int(m/10)
    j+=1
print("Its decimal equivalent is",ans2)