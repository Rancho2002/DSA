def gcd(a,b):
    rem=a%b
    while rem!=0:
        a=b
        b=rem
        rem=a%b
    return b

def fermat(a,power,modulo):
    if(gcd(a,modulo)==1):
        rem=power%(modulo-1)
        return (a**rem) % modulo
    else:
        # return (a**power)%modulo
        return "rickrolled"
    

print(fermat(2,1000000,7))