import re

#your code goes here
n=input()
pattern=r'^00'
newstr=re.sub(pattern,'+',n)
print(newstr)