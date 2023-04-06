import re
#your code goes here
s=input()
pattern=r"^[189][0-9]{7}$"
if(re.match(pattern,s)):
    print("Valid")
else:
    print("Invalid")