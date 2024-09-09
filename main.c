#include <stdio.h>
#include "console/console.h"
#include "function/function.h"
#include "struct/struct.h"

int main(){
    int a = 10;
    int b =29;
    printf("the add is %d\n" , add(&a, &b));
    return 0;
}