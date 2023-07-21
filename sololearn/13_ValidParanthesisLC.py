def isValid(s: str) -> bool:
    l=[]
    for i in s:
        if(i=="(" or i=="{" or i=="["):
            l.insert(0,i)
            # print(l)
        elif(i==")"):
            if(l[0]=="("):
                l.pop(0)
                # print(l)
            else:
                # print("Triger 1")
                return False
        elif(i=="}"):
            if(l[0]=="{"):
                l.pop(0)
                # print(l)
            else:
                # print("Triger 2")
                return False
        elif(i=="]"):
            # print(l)
            if(l[0]=="["):
                l.pop(0)
            else:
                # print("Triger 3")
                return False
            
    if(len(l)==0):
        return True
    # print("Triger 4")
    return False

print(isValid("{[]}"))