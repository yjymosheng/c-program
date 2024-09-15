#include "Vector.h"
#include <stdio.h>

int main() {
  Element e;
  Vector *vec = createVector(5);
  for (int i = 0; i < 10; i++) {
    push(vec, i * 100);
  }

  showVector(vec);

  for (int i = 0; i < 15; i++) {
    int res = pop(vec, &e);
    if (res == 0) {

      fprintf(stdout, "from pop %d \n", e);
    }
  }
  fprintf(stdout, "\n");

  releaseVector(vec);
}