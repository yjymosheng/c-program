#include "../../config.h"
#include "../contain/contain.h"

#ifndef STACK_H
#define STACK_H

typedef struct stack {
    char sp;
    char buf[MAXSIZE];
    void (*push)(struct stack* self,Container* input);
    char (*pop)(struct stack* self); 
} Stack;

Stack* init_stack();

void release_stack(Stack* self);
#endif