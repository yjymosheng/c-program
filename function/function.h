#ifndef FUNCTION_H
#define FUNCTION_H

/*
 *这里先用经典类型计算，以后在考虑更大的数字（超出范围的数字）
 */
int add(int *a , int *b);  //返回a+b 的结果
int sub(int *a , int *b);  //返回a-b 的结果
int multiply(int *a , int *b);  //返回a*b 的结果
int  divided(int *a , int *b);  //返回a/b 的结果


/*
 *返回a%b 的结果 这是一个取余的符号，比如5%2 = 1 
 *就是小学的余数。考虑一下负数的状况。
 *C++有一个std::remainder 也是用来计算余数的。
 *这里取名为remaind。 免得报警告
 */
int remaind(int *a , int *b);  



#endif