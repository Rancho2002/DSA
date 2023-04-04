import re

word = input()
#your code goes here
pattern=r'^m..e$'
print("Match" if re.match(pattern,word) else "No match")

# Write a program that takes a word as input, and outputs "Match" if the word has 4 letters, starts with "m" and ends with "e"