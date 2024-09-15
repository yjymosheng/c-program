#include "Vector.h"
#include <stdio.h>

// 创建一个vector
Vector *createVector(int capacity) {
  Vector *vec = (Vector *)malloc(sizeof(Vector));
  vec->capacity = capacity;
  vec->len = 0;
  vec->buf = (Element *)malloc(capacity * sizeof(Element));
  return vec;
}

void push(Vector *vec, Element e) {
  if (vec->len == vec->capacity) {
    vec->capacity *= 2;
    vec->buf = realloc(vec->buf, vec->capacity * sizeof(Element));
  }
  vec->buf[vec->len++] = e;
  return;
}

int pop(Vector *vec, Element *e) {
  if (vec->len == 0) {
    return 1;
  }
  *e = vec->buf[--vec->len];
  return 0;
}

void showVector(Vector* vec){
    for (int i=0; i<vec->len    ; i++ ) {
        printf("%d ",vec->buf[i] );

    }
    printf("\n");
    return;
}

void releaseVector(Vector *vec) {
  if (vec == NULL) {
    return;
    
  }
  if (vec->buf == NULL) {
      return;
    }
    free(vec->buf);
  free(vec);
return;
}
