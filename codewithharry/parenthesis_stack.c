#include <stdio.h>
#include <stdlib.h>

typedef struct stackImplement{
    int top;
    int size;
    char *arr;
}stack;

int isEmpty(stack *ptr){
    if(ptr->top==-1)
        return 1;
    return 0;
}
int isFull(stack *ptr){
    if(ptr->top==ptr->size-1)
        return 1;
    else
        return 0;
}
void push(stack *ptr, char elem){
    if(isFull(ptr))
        printf("StackOverflow!");
    else{
        ptr->top++;
        ptr->arr[ptr->top]=elem;

    }
}

char pop(stack *ptr){
    if(isEmpty(ptr))
    return 0;
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parenthesisCheck(stack *ptr, char *ch){
    int i=0;
    while (ch[i]!='\0')
    {
        if(ch[i]=='(')
        {
            push(ptr,'(');
            ptr->top++;
        }
        else if(ch[i]==')'){
            if(isEmpty(ptr))
                return 0;
            else
                pop(ptr);
        }
        i++;
    }
    if(isEmpty(ptr)) return 1;
    else return 0;
    
}
int main(){
    stack *new=(struct stackImplement *)malloc(sizeof(struct stackImplement));
    new->size=100;
    new->top=-1;
    new->arr=(char *)malloc(new->size*sizeof(char));
    char arr[]="(3+5)";
    if(parenthesisCheck(new,arr)) printf("Parenthesis are not matched!");
    else printf("Parenthesis are matched!");
    return 0;
}