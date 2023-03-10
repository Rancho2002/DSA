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
int stackTop(struct stack *ptr){
    return ptr->arr[ptr->top];
}

int stackBottom(struct stack *ptr){
    return ptr->arr[0];
}

void push(struct stack* ptr, int i){
    if(isFull(ptr))
    printf("StackOverflow\n");
    else{
        ptr->top++;
        ptr->arr[ptr->top]=i;
    }
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

    printf("\n%d\n",stackTop(new));
    printf("%d",stackBottom(new));
    return 0;
}