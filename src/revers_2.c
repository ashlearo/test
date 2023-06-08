

#include "revers_2.h"

#include <stdio.h>

#include "list.h"

Node revers_2(Node* list) {
  Node* revers_list = NULL;
  while (list != NULL) {
    Node* p = list->next;
    list->next = revers_list;
    revers_list = list;
    list = p;
  }
  return *revers_list;
}
