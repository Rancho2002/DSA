#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};

void display(struct stack *arr){
    for(int i=arr->top;i!=-1;i--){
        printf("%d ",arr->arr[i]);
    }
}

int isEmpty(struct stack *arr){
    if(arr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *arr){
    if(arr->top==arr->size-1){
        return 1;
    }
    else{
        return  0;
    }
}
int main(){
    struct stack *new=(struct stack *)malloc(sizeof(struct stack));
    new->size=6;
    new->top=-1;
    new->arr=(int *)malloc(new->size*sizeof(int));

    new->arr[0]=72;
    new->top++;
    new->arr[1]=82;
    new->top++;
    
    new->arr[2]=12;
    new->top++;
    new->arr[3]=12;
    new->top++;
    new->arr[4]=12;
    new->top++;
    new->arr[5]=12;
    new->top++;

    if(isEmpty(new)){
        printf("Stack Empty\n");
    }
    else
    printf("Stack not empty\n");

    if(isFull(new)){
        printf("Stack Full\n");
    }
    else{
        printf("Stack not full\n");
    }
    
    display(new);
    return 0;
}