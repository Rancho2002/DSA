import re
password = input()
pattern=r'\w*[A-Z]\w*[0-9]\w*'
# pattern=r"[A-Z]+[0-9]+$"
# pattern = r"\w*[A-Z]\w*[0-9]\w*"
if(re.match(pattern,password)): print("Password created")
else: print("Wrong format")
#your code goes here
