#include "calculate/calculate.h"
#include "config.h"
#include "process/process.h"
#include "struct/contain/contain.h"
#include "struct/stack/stack.h"
#include <stdio.h>


int main() {
  Container *input = init_container(); // 用一个结构体来存放输入的表达是
  // Stack *stack = init_stack();
  // greeting(); // 程序运行时的输出
  // while (input->get_input(input)) {
  //   while (input->is_empty(input)) {
  //     switch (analyze(input)) {
  //     case digitals:
  //       stack->push(stack, input);
  //       break;
  //     case operators: // todo！ 计算
  //       break;
  //     }
  //     input->next(input); // todo!
  //   }
  // }
  
  // switch (input->get_input(input)) {
  // case Ok:printf("%s\n",input->input);
  // break;
  // case Err:printf("has error");
  // }

printf("run \n %d \n",input->is_empty(input));

  release_container(input);
  return 0;
}