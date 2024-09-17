#ifndef QUEUE_STATIC_H
#define QUEUE_STATIC_H

#include <stdio.h>
#include <stdlib.h>

typedef int Element;

typedef struct {
  int head;
  int rear;
  Element data[];
} Queue;

/*
 *两种写法：
 * 1、先加后写
 * 2、先写后加
 * 区别，空和满的判断要颠倒
 * 这里写  先加后写
 * 建议自行尝试一下另一种写法
 */

Queue *createQueue(int capacity); // 创建一个Queue

int push(Queue *queue, Element e); // 末尾添加一个元素

int pop(Queue *queue, Element *e); // 头部弹出一个元素，并赋值给e；

void showQueue(Queue *queue);

void releaseQueue(Queue *queue); // 释放内存，避免泄漏
// todo
//  void append(Queue*vec ,Queue* other);
//  //将other的所有元素加到vec后面，然后释放other Queue* spilit_off(Queue*vec
//  ,int at); //在给定索引处将集合分成两部分。返回一个新分配的向量，其中包含[at,
//  len)范围内的元素。调用后，原始向量将保留包含元素[0,
//  at)的容量，且其先前的容量不变。
#endif
