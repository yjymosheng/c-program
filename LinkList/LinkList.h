#ifndef LINKLIST_H
#define LINKLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int Element ;   //存储的元素类型

typedef struct Node{
    Element val;
    struct Node* next;
} Node;

typedef struct{
   Node* head;
   Node* rear ;
   int len ;
} LinkList;

LinkList* createList();    //创建一个List

void push(LinkList*list , Element e );   //末尾添加一个元素

int pop(LinkList*list , Element *  e);     //末尾弹出一个元素，并赋值给e；

// typedef enum{
//     Ok,Err
// } Result;
// enum Result pop(LinkList*list , Element *  e);     //末尾弹出一个元素，并赋值给e；
// Element pop(LinkList*list);    //都有不同的写法，可以根据实际需求进行自己的定义

int removeList(LinkList* list, Element e );
int insertList(LinkList* list, Element e ,int index);

void showList(LinkList* list);

void releaseList(LinkList* list); //释放内存，避免泄漏


//todo
void append(LinkList*list ,LinkList* other);  //将other的所有元素加到vec后面，然后释放other
LinkList* spilit_off(LinkList*list ,int at);  //在给定索引处将集合分成两部分。返回一个新分配的向量，其中包含[at, len)范围内的元素。调用后，原始向量将保留包含元素[0, at)的容量，且其先前的容量不变。
#endif
