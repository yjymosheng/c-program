#ifndef VECTOR_H
#define VECTOR_H

#include <stdio.h>
#include <stdlib.h>

typedef int Element ;

typedef struct{
    int len;    //现长度
    int capacity; //容量
    Element * buf;  //一个放在堆上面数组的数组，用malloc创建

} Vector;

Vector* createVector(int capacity);    //创建一个vector

void push(Vector*vec , Element e );   //末尾添加一个元素

int pop(Vector*vec , Element *  e);     //末尾弹出一个元素，并赋值给e；

// typedef enum{
//     Ok,Err
// } Result;
// enum Result pop(Vector*vec , Element *  e);     //末尾弹出一个元素，并赋值给e；
// Element pop(Vector*vec);    //都有不同的写法，可以根据实际需求进行自己的定义


void showVector(Vector* vec);

void releaseVector(Vector* vec); //释放内存，避免泄漏


//todo
void append(Vector*vec ,Vector* other);  //将other的所有元素加到vec后面，然后释放other
Vector* spilit_off(Vector*vec ,int at);  //在给定索引处将集合分成两部分。返回一个新分配的向量，其中包含[at, len)范围内的元素。调用后，原始向量将保留包含元素[0, at)的容量，且其先前的容量不变。
#endif
