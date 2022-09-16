#include <stdio.h>
#include <stdlib.h>

struct stackMethods
{
    int size;
    int top;
    int * arr;
};
int isEmpty(struct stackMethods *ptr){
    if(ptr->top==-1)
    return 1;
    else
    return 0;
}
int isFull(struct stackMethods *ptr){
    if(ptr->top==ptr->size-1)
    return 1;
    else
    return 0;
}
void push(struct stackMethods *ptr, int elem){
    if(isFull(ptr)){
        printf("StackOverflow!\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=elem;
        printf("%d pushed to the stack.\n",elem);
    }
}

int pop(struct stackMethods *ptr){
    int elem;
    if(isEmpty(ptr)){
    printf("StackUnderflow!\n");
    return -1;
    }
    else{
        elem=ptr->arr[ptr->top];
        printf("%d popped from stack.\n",elem);
        ptr->top--;
        return elem;
    }
}
int main(){
    struct stackMethods *newStack;
    newStack->size=5;
    newStack->top=-1;
    newStack->arr=(int *)malloc(newStack->size*sizeof(int));

    push(newStack,5);
    push(newStack,4);
    push(newStack,7);
    push(newStack,9);
    push(newStack,2);
    push(newStack,10);
    pop(newStack);
    pop(newStack);
    pop(newStack);
    pop(newStack);
    pop(newStack);
    pop(newStack);
    push(newStack,10);
    return 0;
}