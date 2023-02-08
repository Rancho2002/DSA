#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node *next;
};

void getMaxMin(struct node *head, int *max, int *min) {
  *max = *min = head->data;
  while (head != NULL) {
    if (head->data > *max)
      *max = head->data;
    if (head->data < *min)
      *min = head->data;
    head = head->next;
  }
}

int main() {
  int max, min;
  struct node *head = NULL;
  struct node *second = NULL;
  struct node *third = NULL;
 
  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
 
  head->data = 1;
  head->next = second;
 
  second->data = 2;
  second->next = third;
 
  third->data = 3;
  third->next = NULL;
 
  getMaxMin(head, &max, &min);
 
  printf("Max: %d\n", max);
  printf("Min: %d\n", min);
 
  return 0;
}
