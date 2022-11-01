#include <stdio.h>
#include <stdlib.h>

struct doublyLinkedList
{
    int data;
    struct doublyLinkedList * prev;
    struct doublyLinkedList * next;
};

void traverse(struct doublyLinkedList *ptr){
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    
}

void reverse(struct doublyLinkedList *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->prev;
    }
}
int main(){
    struct doublyLinkedList *head,*second, *third, *fourth;
    head=(struct doublyLinkedList *)malloc(sizeof(struct doublyLinkedList));
    second=(struct doublyLinkedList *)malloc(sizeof(struct doublyLinkedList));
    third=(struct doublyLinkedList *)malloc(sizeof(struct doublyLinkedList));
    fourth=(struct doublyLinkedList *)malloc(sizeof(struct doublyLinkedList));

    head->data=9;
    head->prev=NULL;
    head->next=second;

    second->data=3;
    second->prev=head;
    second->next=third;

    third->data=5;
    third->prev=second;
    third->next=fourth;

    fourth->data=8;
    fourth->prev=third;
    (*fourth).next=NULL;

    traverse(head);
    printf("\n");
    reverse(fourth);
    return 0;
}