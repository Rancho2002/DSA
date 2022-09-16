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
    return 0;
    else{
        ptr->rear++;
        ptr->arr[ptr->rear]=elem;
    }
}

int dequeue(queue *ptr, int elem){
    if(isEmpty(ptr))
        return 0;
    else{
        ptr->front++;
        return ptr->arr[ptr->front];
    }
}



int main(){
    queue * new=(struct queueNew *)malloc(sizeof(struct queueNew));
    new->size=100;
    new->front=-1;
    new->rear=-1;
    new->arr=(int *)malloc(new->size*sizeof(int));
    return 0;
}