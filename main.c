#include "calculate/calculate.h"
#include "config.h"
#include "process/process.h"
#include "struct/contain/contain.h"
#include "struct/stack/stack.h"
#include <stdio.h>

/*
 * PC指针是指向输入数据位置的指针
 * 通过PC指针的移动。
 * 判断每一个PC指针指向的数据属于运算符（+、-、*、/、%）还是操作数
 */
int main() {
  Container *input = init_container(); // 用一个结构体来存放输入的表达是
  Stack *stack = init_stack();
  greeting(); // 程序运行时的输出
  while (get_input_container(input)) {
    while (input->is_empty()) {
      switch (analyze(input)) {
      case digitals:
        stack->push(stack, input);
        break;
      case operators: // todo！ 计算
        break;
      }
      input->next(); // todo!
    }
  }

  return 0;
}