file = open("/usercode/files/books.txt", "r")

#your code goes here
lines=file.readlines()

for j,i in enumerate(lines):
    if(j!=len(lines)-1):
        print(i[0]+str(len(i)-1))
    else:
        print(i[0]+str(len(i)))


file.close()

# https://www.sololearn.com/learning/eom-project/1073/353