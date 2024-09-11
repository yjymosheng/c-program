
#ifndef CONTAIN_H
#define CONTAIN_H
#include "../../config.h"
#include <stdbool.h>

/*
 * PC指针是指向输入数据位置的指针
 * 通过PC指针的移动。
 * 判断每一个PC指针指向的数据属于运算符（+、-、*、/、%）还是操作数
 */
typedef struct Container {
  unsigned char  pc;
   char *input; //char太小了，容易爆
   bool (*is_empty)(struct Container* self);
   enum function_state (*get_input)(struct Container* self);
   void (*next) (struct Container* self);
} Container;

Container* init_container ();

// static enum function_state get_input_container(Container* self);
// static bool isempty (Container* self); //当input[pc]=='\0' 就表明已经遍历完了，是空的
// static void contain_next(Container * self);
void release_container(Container* self);

void printf_contain(Container* self);

#endif