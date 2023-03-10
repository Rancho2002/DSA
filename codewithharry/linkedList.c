#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void linkedListTraverse(struct Node *ptr){
    while (ptr!=NULL) // ptr->next != NULL is not correct as this mean traverse will stop before the end linked list, but when you write ptr->NULL this mean when NODE become NULL, which is correct  
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    
}
int main(){
    struct Node *f1,*f2,*f3,*f4; // these are struct pointer
    f1=(struct Node *)malloc(sizeof(struct Node));
    f2=(struct Node *)malloc(sizeof(struct Node));
    f3=(struct Node *)malloc(sizeof(struct Node));
    f4=(struct Node *)malloc(sizeof(struct Node));

    f1->data=34;
    f1->next=f2;
    
    f2->data=4;
    f2->next=f3;

    f3->data=84;
    f3->next=f4;

    f4->data=39;
    f4->next=NULL;

    linkedListTraverse(f1);
    return 0;
}