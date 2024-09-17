#include "Stack_dynamic.h"

Stack *creatStack() {
  Stack *stack = (Stack *)malloc(sizeof(Stack));
  stack->count = 0;
  stack->buf = NULL;
  return stack;
}
int pushStack(Stack *stack, Element e) {
  Node *node = (Node *)malloc(sizeof(Node));
  node->val = e;
  node->next = NULL;
  Node *temp = stack->buf;
  if (stack->buf == NULL) {
    stack->buf = node;
    stack->count++;
  } else {
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = node;
    stack->count++;
  }
  return 0;
}
int popStack(Stack *stack, Element *e) {
  switch (stack->count) {
  case 0: {
    printf("空了\n");
    return -1;
  }
  case 1: {
    *e = stack->buf->val;
    free(stack->buf);
    stack->buf = NULL;
    stack->count--;
    return 0;
  }
  case 2: {
    *e = stack->buf->next->val;
    free(stack->buf->next);
    stack->buf->next = NULL;
    stack->count--;
    return 0;
  }
  default: {
    Node *temp = stack->buf;
    while (temp->next->next != NULL) {
      temp = temp->next;
    }
    *e = temp->next->val;
    free(temp->next);
    temp->next = NULL;
    stack->count--;
    return 0;
  }
  }
}

Element top(Stack *stack) {
  if (stack->count <= 0) {
    printf("空了\n");
    return -1;
  }
  int cnt = 0;
  Node *temp = stack->buf;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  return temp->val;
}

void releaseStack(Stack *stack) {
  Node *temp = stack->buf;

  if (stack != NULL) {
    while (stack->buf) {
      stack->buf = temp->next;
      free(temp);
      temp = stack->buf;
    }
    free(stack);
  }
  return;
}
