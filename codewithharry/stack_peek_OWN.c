#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack* ptr){
    if(ptr->top==ptr->size-1)
    return 1;
    return 0;
}

int isEmpty(struct stack* ptr){
    if(ptr->top==-1)
    return 1;
    return 0;
}

void push(struct stack* ptr, int i){
    if(isFull(ptr))
    printf("StackOverflow\n");
    else{
        ptr->top++;
        ptr->arr[ptr->top]=i;
    }
}

int peek(struct stack* ptr, int i){
    int pos = ptr->top - i + 1;
    if(pos<1){
        printf("Invalid Position!\n");
        return -1;
    }
    else
    return ptr->arr[pos];
}
int main(){
    struct stack* new= (struct stack *) malloc(sizeof(struct stack));
    new->size=5;
    new->top=-1;
    new->arr=(int *)malloc(new->size*sizeof(int));
    push(new,63);
    push(new,20);
    push(new,13);
    push(new,42);
    push(new,64);
    push(new,16);

    for (int i = 1; i <= new->top +1; i++)
       printf("The value of stack at position %d is %d\n",i, peek(new,i));
    
    
    return 0;
}