def gcd(a:int,b:int)->int:
    if b==0:
        return a
    if a==0:
        return b

    if a>b:
        # return gcd(a-b,b)
        return gcd(a%b,b)
    else:
        # return gcd(a,b-a)
        return gcd(a,b%a)

def lcm(a:int,b:int)->int:
    return (a*b)//gcd(a,b)

print(gcd(3,4))
print(lcm(3,4))