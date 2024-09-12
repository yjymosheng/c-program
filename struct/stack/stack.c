#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


static void stack_push(Stack* self,char e);
static char stack_pop(Stack* self);


Stack* init_stack(){
    Stack* s = (Stack*) malloc(sizeof(Stack));
    s->sp = -1;
    s->buf = (char*)malloc(sizeof(char)*MAXSIZE);

    s->push = & stack_push;
    s->pop = &stack_pop;
    return s;
}

static void stack_push(Stack* self,char e ){
    if (self->sp==MAXSIZE) {
        fprintf(stderr, "the stack is top_overflow");
        return ;
    }
        fprintf(stdout, "stack push : %d\n",e);

    self->sp+=1;
    self->buf[self->sp] = e;
    return ;
}
static char stack_pop(Stack* self){
    if (self->sp==-1) {
        fprintf(stderr, "the stack is min_overflow");
        return EOF;
    }

    char a = self->buf[self->sp];
        fprintf(stdout, "stack pop : %d\n",a);
        self->sp-=1;
    return a;
}

void release_stack(Stack* self){
    free(self->buf);
    free(self);
}

