import os
from math import log10

files=os.listdir(".")
digits=int(log10(len(files)))+1

print("'p' for preview,'y' for reaname: ")
p =input()

for i in files:

    if i[0].isdigit() and p!="y":
        print(i[digits+1:])
    
    elif i[0].isdigit() and p=="y":
        os.rename(i,i[digits+1:])
    
if p=="y":
    print("File renaming successful.")
