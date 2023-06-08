#include "revers_1.h"

#include <stdio.h>

#include "list.h"

Node revers_1(Node* list) {
  Node* revers_list = NULL;
  while (list != NULL) {
    push(&revers_list, list->data);
    list = list->next;
  }
  return *revers_list;
}