def searchInLinkedList(head, k):
    # Your code goes here.
    while head is not None:
        if head.data==k:
            return 1
        head=head.next
    return 0