#include "../../config.h"
#include "../contain/contain.h"

#ifndef STACK_H
#define STACK_H

typedef struct {
    char sp;
    char buf[MAXSIZE];
} Stack;

Stack* create_stack ();



void push_stack(Stack* self ,Container* input);


#endif