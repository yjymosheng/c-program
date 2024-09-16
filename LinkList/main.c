#include "LinkList.h"
#include <stdio.h>

int main(){
  Element e;

    LinkList * list = createList();
for (int i = 0; i <  90; i++) {

    push(list, i * 100);
    printf("the len is %d\n",list->len);
showList(list);
  }

showList(list);

for (int i = 0; i < 90; i++) {
    int res = pop(list, &e);
    if (res == 0) {

      fprintf(stdout, "from pop %d \n", e);
      showList(list);
    printf("the len is %d\n",list->len);

    }else {
    printf("the len is %d\n",list->len);

    printf("res %d \n",res);
    }
  }
  fprintf(stdout, "\n");
  releaseList(list);

}