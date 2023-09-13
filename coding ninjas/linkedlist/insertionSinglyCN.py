class Node:
        def __init__(self,data):
            self.data = data
            self.next = None

def insert(head, n, pos, val):
    # Write your code here.
    prev=None
    cur=head
    count=0
    while count<pos and cur is not None:
        prev=cur
        cur=cur.next
        count+=1

    newNode=Node(val)

    if prev is None:
        head=newNode
    else:
        prev.next=newNode
    newNode.next=cur

    return head