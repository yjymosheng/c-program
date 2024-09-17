#include "Queue_static.h"
#include <stdio.h>

int main() {
  Queue * queue = createQueue(50);
  Element e;
  for (int i =0 ; i<55; i++) {
    push(queue, i);
  }
  showQueue(queue);
 for (int i =0 ; i<55; i++) {
    pop(queue, &e);
    printf("from pop e is %d \n",e);
  }

  showQueue(queue);

releaseQueue(queue);
 return 0;
}