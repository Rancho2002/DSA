def lookAndSequence(n):
    s=1
    # Write your code here.
    for _ in range(n):
        s=list(str(s))
        m=set(s)
        ans=""
        for i in m:
            ans+=str(s.count(i))+i

lookAndSequence(2)