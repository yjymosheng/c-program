#include "Stack_static.h"

Stack *creatStack() {
  Stack *stack = (Stack *)malloc(sizeof(Stack));
  stack->pc = -1;
  return stack;
}
int pushStack(Stack *stack, Element e) {
  if (stack->pc == 49) {
    printf("满了\n");
    return -1;
  }
  stack->buf[++stack->pc] = e;
  return 0;
}
int popStack(Stack *stack, Element *e){
    if (stack->pc<0) {
        printf("空了\n");
    return -1;
    }
    *e = stack->buf[stack->pc--] ;
    return 0;
}

Element top(Stack * stack){
     if (stack->pc<0) {
        printf("空了\n");
    return -1;}
    return stack->buf[stack->pc];
}

void releaseStack(Stack *stack){
    if (stack!=NULL) {
        free(stack);
    }
    return;
}
