
'''
All the products in online shop have their own ID. Every ID consists of 4 symbols:
The first symbol: an uppercase character
The second symbol: an uppercase character
The third symbol: a digit
The forth symbol: a digit
#! Remember to use $ sign in pattern to set the ending of the ID string.
'''
import re
Id = input()

#your code goes here
pattern=r'[A-Z][A-Z][0-9][0-9]$'
if(re.match(pattern,Id)):
    print("Searching")
else:
    print("Wrong format")