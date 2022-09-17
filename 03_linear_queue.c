#include <stdio.h>
#include <stdlib.h>

typedef struct queueNew
{
    int size;
    int front;
    int rear;
    int *arr;
}queue;

int isFull(queue *ptr){
    if(ptr->rear==ptr->size-1)
    return 1;
    else
    return 0;
}

int isEmpty(queue *ptr){
    if(ptr->front==ptr->rear)
    return 1;
    else
    return 0;
}

void enqueue(queue *ptr, int elem){
    if(isFull(ptr))
    printf("Queue Overflow!");
    else{
        ptr->rear++;
        ptr->arr[ptr->rear]=elem;
        printf("Element %d enqueued.\n",elem);
    }
}

int dequeue(queue *ptr){
    if(isEmpty(ptr))
        return 0;
    else{
        ptr->front++;
        return ptr->arr[ptr->front];
    }
}



int main(){
    queue * new=(struct queueNew *)malloc(sizeof(struct queueNew));
    new->size=4;
    new->front=-1;
    new->rear=-1;
    new->arr=(int *)malloc(new->size*sizeof(int));
    if(isEmpty(new))
    printf("Queue is empty.\n");
    
    enqueue(new, 10);
    enqueue(new, 20);
    enqueue(new, 30);
    enqueue(new, 40);

    printf("Dequeued element %d\n",dequeue(new));
    printf("Dequeued element %d\n",dequeue(new));   
    printf("Dequeued element %d\n",dequeue(new));   
    printf("Dequeued element %d\n",dequeue(new));   


    if(isEmpty(new))
    printf("Queue is empty.\n");
    
    if(isFull(new))
    printf("Queue is full.\n");

    enqueue(new, 40);
    return 0;
}