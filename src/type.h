#ifndef SRC_TYPE_H_
#define SRC_TYPE_H_

typedef int Data;

typedef struct Node Node;

struct Node {
  Data data;
  Node* next;
};

#endif  // SRC_TYPE_H_
