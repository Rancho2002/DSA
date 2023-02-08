#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *prev;
  struct node *next;
};

void deleteNode(struct node **head, struct node *nodeToDelete) {
  if (*head == NULL || nodeToDelete == NULL) {
    return;
  }

  if (*head == nodeToDelete) {
    *head = nodeToDelete->next;
  }

  if (nodeToDelete->next != NULL) {
    nodeToDelete->next->prev = nodeToDelete->prev;
  }

  if (nodeToDelete->prev != NULL) {
    nodeToDelete->prev->next = nodeToDelete->next;
  }

  free(nodeToDelete);
}

int main() {
  // code to test the deleteNode function
  return 0;
}
