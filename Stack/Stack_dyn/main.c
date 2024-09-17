#include "Stack_dynamic.h"
#include <stdio.h>

int main(){
    Stack* stack = creatStack();
    Element e;
    for (int i=0; i<60; ++i) {
        pushStack(stack, 100+i*100);
    }

    for (int i=0; i<65; ++i) {

        if (i>=55) {
        printf("============================\n");
        }
        printf("the top is %d\n",top(stack));
        popStack(stack, &e);
        
        printf("the e is %d\n",e);

    }

releaseStack(stack);
return 0;
    

}