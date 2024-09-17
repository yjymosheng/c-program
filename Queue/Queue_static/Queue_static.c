#include "Queue_static.h"
// 创建一个Queue
Queue *createQueue(int capacity) {
  Queue *queue = (Queue *)malloc(sizeof(Queue) + sizeof(Element) * capacity);
  if (queue == NULL) {
    return NULL;
  }
  queue->head = 0;
  queue->rear = 0;

  queue->data[0] = -49;
  return queue;
}
// 末尾添加一个元素
int push(Queue *queue, Element e) {
  if ((queue->rear + 1) % 50 == queue->head) {
    printf("满了\n");
    return -1;
  }
  queue->data[(++queue->rear) % 50] = e;
  return 0;
}
// 头部弹出一个元素，并赋值给e；
int pop(Queue *queue, Element *e) {
  if (queue->head == queue->rear) {
    printf("空了\n");
    return -1;
  }
  *e = queue->data[(++queue->head) % 50];
  return 0;
}

void showQueue(Queue *queue) {
  for (int i = 0; i < 50; i++) {
    printf("%d ", queue->data[i]);
  }
  printf("\n");
  return;
}
// 释放内存，避免泄漏
void releaseQueue(Queue *queue) {
  if (queue) {
    free(queue);
  }
  return;
}