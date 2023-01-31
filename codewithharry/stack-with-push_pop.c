#include <stdio.h>
#include <stdlib.h>

// Creating Stack
struct stackMethods
{
    int size;
    int top;
    int *arr;
};

// Checking whether the stack is empty
int isEmpty(struct stackMethods *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

// Checking whether the stack is full
int isFull(struct stackMethods *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

// Printing the stack
void display(struct stackMethods *ptr)
{
    printf("Stack Elements: \n");
    if (!isEmpty(ptr))
    {
        printf("--> ");
        for (int i = ptr->top; i >= 0; i--)
        {
            printf("%d ", ptr->arr[i]);
        }
        printf("\n");
    }
    else
        printf("---> Stack is empty!\n");
}

// Pushing elements into stack
void push(struct stackMethods *ptr, int elem)
{
    if (isFull(ptr))
    {
        printf("StackOverflow!\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = elem;
        printf("%d pushed to the stack.\n", elem);
    }
}

// Pop/remove elements from stack
int pop(struct stackMethods *ptr)
{
    int elem;
    if (isEmpty(ptr))
    {
        printf("StackUnderflow!\n");
        return -1;
    }
    else
    {
        elem = ptr->arr[ptr->top];
        printf("%d popped from stack.\n", elem);
        ptr->top--;
        return elem;
    }
}
int main()
{
    struct stackMethods *stack;
    stack->size = 5;
    stack->top = -1;
    stack->arr = (int *)malloc(stack->size * sizeof(int));

    // Calling functions as per question
    push(stack, 3);
    display(stack);
    pop(stack);
    display(stack);
    push(stack, 7);
    display(stack);
    push(stack, 20);
    display(stack);
    push(stack, 56);
    display(stack);
    pop(stack);
    display(stack);
    push(stack, 45);
    display(stack);
    return 0;
}