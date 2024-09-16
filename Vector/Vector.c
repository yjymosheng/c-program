#include "Vector.h"
#include <stdio.h>
#include <string.h>

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

void insertVector(Vector* vec ,Element e ,int index){
  if (vec->len == vec->capacity) {
    vec->capacity *= 2;
    vec->buf = realloc(vec->buf, vec->capacity * sizeof(Element));
  }
  memcpy(vec->buf+index, vec->buf+index-1, (vec->len-index+1)*sizeof(Element));
  vec->buf[index-1] =   e;
  vec->len++;
  return ;
}

Element getVector(Vector* vec ,int  index ){
  if (index>vec->len || index<=0 ) {
    return -1;
  }
  return  vec->buf[index-1];
}

int locateVector(Vector* vec ,Element e ){
  for (int i=0 ; i<vec->len; i++) {
    if (e == vec->buf[i]) {
      return i+1;
    }
  }
  return -1;
}

int updateVector(Vector* vec , Element e ,int index){
  if (index>vec->len || index<=0 ) {
    return -1;
  }
  vec->buf[index-1] = e;
  return 0;
}
int removeVector(Vector* vec ,int index){
    if (index>vec->len || index<=0 ) {
    return -1;
  }
  Element e = vec->buf[index-1];
  memcpy(vec->buf+index-1, vec->buf+index, (vec->len-index)*sizeof(Element));
  return e;
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
