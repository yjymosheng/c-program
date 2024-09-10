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

static void stack_push(Stack* self,Container* input );
static void stack_pop(Stack* self);

void release_stack();
#endif