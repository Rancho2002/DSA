import os

s=""
print("Enter the code or 'done' in newline to exit")
while(True):
    temp1=input()
    temp2=temp1.strip()

    no_of_tab=(len(temp1)-len(temp2))
    no_of_tab=no_of_tab//4

    if temp1[0]==" " or temp1[0]=="\t":
        s+="\t"*no_of_tab

    if temp1!="done":
        s+=temp1.strip()+"\n"

    else:
        break

print(s)
with open("test.py","w") as f:
    f.write(s)

try:
    os.system("python3 test.py")
except:
    print("Error in code")

