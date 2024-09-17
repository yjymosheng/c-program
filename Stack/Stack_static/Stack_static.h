#ifndef STACK_STATIC_H
#define STACK_STATIC_H
#include <stdio.h>
#include <stdlib.h>
typedef int Element;

typedef struct{
    int pc;
    Element buf[50];
}Stack;


Stack * creatStack () ;

int pushStack(Stack* stack,Element e);
int popStack (Stack* stack,Element* e);
Element top(Stack * stack);


void releaseStack (Stack* stack);

#endif