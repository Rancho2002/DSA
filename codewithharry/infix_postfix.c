#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
typedef struct infix_postfix
{
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

int isOperator(char a){
    if(a=='+' || a=='-' || a=='*' || a=='/')
    return 1;
    else
    return 0;
}

int precedence(char a){
    if(a=='*' || a=='/')
        return 2;
    else if(a=='+' || a=='-')
        return 1;
    else
        return 0;
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
int stacktop(stack *ptr){
    // if(isEmpty(ptr))
    //     return 0;
    return ptr->arr[ptr->top];
}

char * infix_postfix(char *infix){
    stack *new=(struct infix_postfix *)malloc(sizeof(struct infix_postfix));
    new->size=max;
    new->top=-1;
    new->arr=(char *)malloc(new->size * sizeof(char));
    char *postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));
    int i=0;//infix index
    int j=0;//postfix index
    while(infix[i]!='\0'){
        if(isOperator(infix[i]))
        {
            if(precedence(infix[i])>precedence(stacktop(new))){
                push(new,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(new);
                j++;
            }
        }
        else
        {
            postfix[j]=infix[i];
            j++;i++;
        }
    }
    while (!isEmpty(new))
    {
        postfix[j]=pop(new);
        j++;
    }
    postfix[j]='\0';
    return postfix;
    

}

int main(){
// new->arr=(char *)malloc(new->size*sizeof(char));
    char arr1[]="x-y/z-k*d";
    // printf("%u",arr1+2);
    printf("%s",infix_postfix(arr1));

    return 0;
}