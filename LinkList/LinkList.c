#include "LinkList.h"

LinkList *createList() {
  LinkList *list = (LinkList *)malloc(sizeof(LinkList));
  list->head = NULL;
  list->rear = NULL;
  list->len = 0;
  return list;
}
// 末尾添加一个元素
void push(LinkList *list, Element e) {
  Node *node = (Node *)malloc(sizeof(Node));
  node->next = NULL;
  node->val = e;

  if (list->len == 0) {
    list->rear = node;
    list->head = node;
    ++list->len;
  } else {

    list->rear->next = node;
    list->rear = node;
    ++list->len;
  }
  return;
}
// 末尾弹出一个元素，并赋值给e；
int pop(LinkList *list, Element *e) {
  if (list->len == 0) {
    return -1;
  }

  // 当链表中只有一个元素时
  if (list->len == 1) {
    *e = list->head->val;
    free(list->head);
    list->head = NULL;
    list->rear = NULL;
    list->len--;
    return 0;
  }

  // 链表中有多个元素时
  Node *temp = list->head;
  while (temp->next != list->rear) {
    temp = temp->next;
  }

  // temp 是倒数第二个节点
  *e = list->rear->val;
  free(list->rear);
  list->rear = temp;
  list->rear->next = NULL;
  list->len--;

  return 0;
}

void showList(LinkList *list) {
  Node *temp = list->head;
  while (temp != NULL) {
    printf("%d\t", temp->val);
    temp = temp->next;
  }
  printf("\n");
  return;
}

void releaseList(LinkList *list) {
  Node *temp;
  while (list->head != NULL) {
    temp = list->head;
    list->head = list->head->next;
    free(temp);
  }
  free(list);
}