def balanced(expression):
    #your code goes here
    l=[]
    flag=1
    for i in expression:
        if(i=="("):
            l.insert(0,i) # ( # (( # (((
        elif(i==")"):
            if(l!=[]):
                l.pop(0) # ( # [] 
            else:
                return False 
        else:
            continue

    if(len(l)==0):
        return True
    return False

print(balanced(input()))