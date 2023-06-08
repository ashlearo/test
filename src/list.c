#include "list.h"

#include <stdio.h>
#include <stdlib.h>

void print_Node(Node* list) {
  for (Node* p = list; p != NULL; p = p->next) {
    printf("%d ", p->data);
  }
}

void push(Node** plist, Data d) {
  Node* p = malloc(sizeof(Node));
  p->data = d;
  p->next = *plist;
  *plist = p;
}