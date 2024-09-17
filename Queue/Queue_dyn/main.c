#include "Vector.h"
#include <stdio.h>

int main() {
  Element e;
  Vector *vec = createVector(5);
  for (int i = 0; i < 10; i++) {
    push(vec, i * 100);
  }

  showVector(vec);

  for (int i = 0; i < 210; i++) {
    insertVector(vec, i * 100, 2);
  }

  showVector(vec);

  fprintf(stdout, "get from 1 %d \n", getVector(vec, 1));
  fprintf(stdout, "get from 2 %d \n", getVector(vec, 2));

  fprintf(stdout, "get from 2000 %d \n", getVector(vec, 2000));
  fprintf(stdout, "get from 0 %d \n", getVector(vec, 0));
  fprintf(stdout, "get from -1 %d \n", getVector(vec, -1));

  fprintf(stdout, "20800 in  %d \n", locateVector(vec, 20800));

  fprintf(stdout, "-1 in  %d \n", locateVector(vec, -1));
  fprintf(stdout, "0 in  %d \n", locateVector(vec, 0));
  fprintf(stdout, "40800 in  %d \n", locateVector(vec, 40800));

  fprintf(stdout, "remove index 1  %d \n", removeVector(vec, 1));
  showVector(vec);
  fprintf(stdout, "remove index  9000 %d \n", removeVector(vec, 9000));
  showVector(vec);
  fprintf(stdout, "remove index  0 %d \n", removeVector(vec, 0));
  showVector(vec);
  fprintf(stdout, "remove index  -1 %d \n", removeVector(vec, -1));

  showVector(vec);

  
  for (int i = 0; i < 10; i++) {
    updateVector(vec, 0, i);
  showVector(vec);

  }

  for (int i = 0; i < 15; i++) {
    int res = pop(vec, &e);
    if (res == 0) {

      fprintf(stdout, "from pop %d \n", e);
    }
  }
  fprintf(stdout, "\n");

  releaseVector(vec);
}