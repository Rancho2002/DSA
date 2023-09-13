def sum(*args)->None:
    ans=0
    for i in args:
        ans+=i
    print(ans)

def info(**kwargs)->dict:
    # d={}
    # for i in kwargs:
    #     d[i]=kwargs[i]
    # print(d)
    return kwargs

sum(3,5,2)
sum(1,23,4,6)



print(info(a=4,b=2,c=1))
