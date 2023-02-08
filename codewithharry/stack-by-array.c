#include <stdio.h>
#include <stdlib.h>
int top=-1;
void push(int data,int size, char *stack){
    if(top==size-1){
        printf("Stack Overflow\n");
    }
    else{
        top++;
        stack[top]=data;
    }
}

void traverse(char *stack){
    while(top!=-1){
        printf("%d ",stack[top]);
        top--;
    }
}

void pop(char *stack){
    if(top==-1){
        printf("Stack Underflow\n");
    }
    else{
        top--;
    }
}
int main(){
    char stack[3];
    push(1,sizeof(stack),stack);
    push(3,sizeof(stack),stack);
    push(5,sizeof(stack),stack);
    push(6,sizeof(stack),stack);
    traverse(stack);
    pop(stack);
    traverse(stack);
    return 0;
}