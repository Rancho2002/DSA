from typing import Optional

class Node():
    def __init__(self,data=None) -> None:
        self.data=data
        self.next:Optional[Node]=None
    

class Linkedlist():
    def __init__(self) -> None:
        self.head=Node()
    
    def append(self,data)->None:
        new_node=Node(data)
        cur=self.head

        while cur.next!=None:
            cur=cur.next

        cur.next=new_node
    

    def length(self)->int:
        cur=self.head
        count=0
        while cur.next is not None:
            cur=cur.next
            count+=1

        return count

    def display(self)->None:
        elem=[]
        
        cur=self.head

        while cur.next !=None:
            cur=cur.next
            elem.append(cur.data)

        for i in range(len(elem)):
            print(elem[i],end=" ")
            if i!= len(elem)-1:
                print("--> ",end="")
            else:
                print()

    def get(self,index:int):
        if index>=self.length(): #! 0 based indexing korlam
            return "Index out of range."

        track=0
        cur=self.head

        while cur.next is not None:
            cur=cur.next
            if track==index:
                return cur.data
            track+=1 # ! ei line ta jodi line 57 e hoi tahole 1 based indexing hobe
        
    
    def erase(self,index:int):
        if index>=self.length():
            return "Index out of range"
        
        cur_index=0
        cur=self.head

        while cur.next is not None:
            last_node=cur
            cur=cur.next

            if cur_index==index:
                last_node.next=cur.next
                return
            cur_index+=1


n=Linkedlist()

n.append(3)
n.append(3)
n.append(3)
n.append(4)
n.append(4)
n.append(8)
n.append(6)
n.append(7)
n.display()
print(n.get(4))
n.erase(7)
n.display()