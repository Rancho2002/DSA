#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int coef;
    int exp;
    struct Node* next;
} Node;

Node* createNode(int coef, int exp) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->coef = coef;
    node->exp = exp;
    node->next = NULL;
    return node;
}

Node* addPolynomial(Node* A, Node* B) {
    Node dummy;
    Node* tail = &dummy;
    dummy.next = NULL;

    while (A != NULL && B != NULL) {
        if (A->exp > B->exp) {
            tail->next = A;
            tail = tail->next;
            A = A->next;
        } else if (A->exp < B->exp) {
            tail->next = B;
            tail = tail->next;
            B = B->next;
        } else {
            int sum = A->coef + B->coef;
            if (sum != 0) {
                tail->next = createNode(sum, A->exp);
                tail = tail->next;
            }
            A = A->next;
            B = B->next;
        }
    }

    while (A != NULL) {
        tail->next = A;
        tail = tail->next;
        A = A->next;
    }

    while (B != NULL) {
        tail->next = B;
        tail = tail->next;
        B = B->next;
    }

    return dummy.next;
}

void printPolynomial(Node* poly) {
    while (poly != NULL) {
        printf("%d x^%d + ", poly->coef, poly->exp);
        poly = poly->next;
    }
    printf("\b\b ");
}

int main() {
    Node* A = createNode(3, 5);
    A->next = createNode(2, 4);
    A->next->next = createNode(1, 2);

    Node* B = createNode(5, 5);
    B->next = createNode(7, 3);
    B->next->next = createNode(9, 2);

    printf("Polynomial A: ");
    printPolynomial(A);
    printf("\n");

    printf("Polynomial B: ");
    printPolynomial(B);
    printf("\n");

    Node* sum = addPolynomial(A, B);
    printf("Sum: ");
    printPolynomial(sum);
    printf("\n");

    return 0;
}