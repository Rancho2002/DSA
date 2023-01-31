#include <stdio.h>
#include <stdlib.h>

// Structure to store a single term of a polynomial
struct Term
{
    int coef; // coefficient
    int exp;  // exponent
    struct Term *next;
};

// Function to add two polynomials represented as linked lists
struct Term *addPoly(struct Term *p1, struct Term *p2)
{
    struct Term *result = NULL;
    struct Term *last = NULL;
    struct Term *t1 = p1, *t2 = p2;

    while (t1 != NULL && t2 != NULL)
    {
        struct Term *temp = (struct Term *)malloc(sizeof(struct Term));

        if (t1->exp > t2->exp)
        {
            temp->coef = t1->coef;
            temp->exp = t1->exp;
            t1 = t1->next;
        }
        else if (t2->exp > t1->exp)
        {
            temp->coef = t2->coef;
            temp->exp = t2->exp;
            t2 = t2->next;
        }
        else
        {
            temp->coef = t1->coef + t2->coef;
            temp->exp = t1->exp;
            t1 = t1->next;
            t2 = t2->next;
        }

        temp->next = NULL;

        if (result == NULL)
        {
            result = temp;
        }
        else
        {
            last->next = temp;
        }

        last = temp;
    }

    while (t1 != NULL)
    {
        struct Term *temp = (struct Term *)malloc(sizeof(struct Term));
        temp->coef = t1->coef;
        temp->exp = t1->exp;
        temp->next = NULL;
        last->next = temp;
        last = temp;
        t1 = t1->next;
    }

    while (t2 != NULL)
    {
        struct Term *temp = (struct Term *)malloc(sizeof(struct Term));
        temp->coef = t2->coef;
        temp->exp = t2->exp;
        temp->next = NULL;
        last->next = temp;
        last = temp;
        t2 = t2->next;
    }

    return result;
}

// Function to display a polynomial represented as linked list
void displayPoly(struct Term *t)
{
    while (t != NULL)
    {
        printf("%dx^%d + ", t->coef, t->exp);
        t = t->next;
    }
    printf("\n");
}

// Function to create a linked list from a polynomial
struct Term *createPoly(int n)
{
    struct Term *last = NULL;
    struct Term *first = NULL;

    for (int i = 0; i < n; i++)
    {
        struct Term *temp = (struct Term *)malloc(sizeof(struct Term));
        printf("Enter coefficient and exponent of term %d: ", i + 1);
        scanf("%d%d", &temp->coef, &temp->exp);
        temp->next = NULL;

        if (last == NULL)
        {
            first = temp;
        }
        else
        {
            last->next = temp;
        }

        last = temp;
    }

    return first;
}

int main()
{
    int n1, n2;
    printf("Enter number of terms in polynomial 1: ");
    scanf("%d", &n1);
    struct Term *t1 = createPoly(n1);

    printf("Enter number of terms in polynomial 2: ");
    scanf("%d", &n2);
    struct Term *t2 = createPoly(n2);

    struct Term *result = addPoly(t1, t2);

    printf("Polynomial 1: ");
    displayPoly(t1);

    printf("Polynomial 2: ");
    displayPoly(t2);

    printf("Result: ");
    displayPoly(result);

    return 0;
}