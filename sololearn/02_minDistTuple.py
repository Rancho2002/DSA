points = [
    (12, 55),
    (880, 123),
    (64, 64),
    (190, 1024),
    (77, 33),
    (42, 11),
    (0, 90)
]
#your code goes here
ans=(points[0][0]**2+points[0][1]**2)**0.5
for i,j in points:
    temp=(i**2+j**2)**0.5
    if(temp<ans):
        ans=temp
print(ans)