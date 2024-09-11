#include "calculate.h"

/*
 *示例 
 */
int add(char* a , char* b){
    return (*a)+(*b);
}

  //返回a-b 的结果
int sub(char* a , char* b){
    return (*a)-(*b);
}


int multiply(char* a , char* b){
    return (*a)*(*b);
}

int divided(char* a , char* b){
    return (*a)/(*b);
}

int remaind(char* a , char* b){
    return (*a)&(*b);
}
