#ifndef STACK_DYNAMIC_H
#define STACK_DYNAMIC_H
#include <stdio.h>
#include <stdlib.h>
typedef int Element;

typedef struct Node{
    Element val ;
    struct Node* next;
} Node;

typedef struct{
    int count ;
    Node * buf ;
}Stack;


Stack * creatStack () ;

int pushStack(Stack* stack,Element e);
int popStack (Stack* stack,Element* e);
Element top(Stack * stack);


void releaseStack (Stack* stack);

#endif