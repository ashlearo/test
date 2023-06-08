#include <stdio.h>

#include "list.h"
#include "revers_1.h"
#include "revers_2.h"

int main() {
  Data test[] = {5, 4, 3, 2, 1};
  Node* list = NULL;
  for (size_t i = 0; i < sizeof(test) / sizeof(test[0]); i++) {
    push(&list, test[i]);
  }
  printf("Print input list:\n");
  print_Node(list);
  printf("\n");

  Node list_1 = revers_1(list);
  printf("Print output list revers_1:\n");
  print_Node(&list_1);
  printf("\n");

  Node list_2 = revers_2(list);
  printf("Print output list revers_2:\n");
  print_Node(&list_2);

  return 0;
}
