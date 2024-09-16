#include "LinkList.h"
#include <stdio.h>

int main() {
  Element e;

  LinkList *list = createList();
  for (int i = 0; i < 90; i++) {

    push(list, i * 100);
    printf("the len is %d\n", list->len);
    showList(list);
  }

  showList(list);

  // for (int i = 0; i < 90; i++) {
  //     int res = pop(list, &e);
  //     if (res == 0) {

  //       fprintf(stdout, "from pop %d \n", e);
  //       showList(list);
  //     printf("the len is %d\n",list->len);

  //     }else {
  //     printf("the len is %d\n",list->len);

  //     printf("res %d \n",res);
  //     }
  //   }
  //   fprintf(stdout, "\n");
  showList(list);
  printf("============================================\n");
  for (int i = 0; i < 90; i++) {
    showList(list);
    removeList(list, 1000 + i * 100);
  }
printf("============================================\n");

    removeList(list, 0);
    removeList(list, 100);
    removeList(list, 900);
// 这个会出问题，会导致泄漏，且会有错误。找到它，解决它
  // push(list, 1000);
  printf("rear is %d\n",*list->rear);
for (int i = 2; i <=8; i++) {
    showList(list);
    removeList(list, i * 100);
  }
  showList(list);

printf("============================================\n");

  insertList(list, 100, 1);
  showList(list);
  insertList(list, 100, 2);
  showList(list);
  insertList(list, 100, 3);


  showList(list);
  insertList(list, 100, 5);

  showList(list);
  insertList(list, 100, -1);
  showList(list);
  insertList(list, 100, 0);

  releaseList(list);
}