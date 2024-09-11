#include "../../config.h"
#include "../contain/contain.h"

#ifndef STACK_H
#define STACK_H

typedef struct Stack {
    unsigned char sp;
    char *buf;
    void (*push)(struct Stack* self,char e);
    char (*pop)(struct Stack* self); 
} Stack;

Stack* init_stack();

void release_stack(Stack* self);
#endif