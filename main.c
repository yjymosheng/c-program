#include "calculate/calculate.h"
#include "config.h"
#include "process/process.h"
#include "struct/contain/contain.h"
#include "struct/stack/stack.h"
#include <stdio.h>

int main() {
  Container *input = init_container(); // 用一个结构体来存放输入的表达是
  Stack *stack = init_stack();
  greeting(); // 程序运行时的输出
  input->get_input(input);
  // while (input->get_input(input)) {
    while (!(input->is_empty(input))) {
      printf_contain(input);
      switch (analyze(input)) {
      case 0:
        printf("from digitals\n");
        stack->push(stack, input->input[input->pc]);
        break;
      case 1:
        printf("from operators\n");

        calculate(stack, input);
        break;
      }
      input->next(input); 
    }
    fprintf(stdout, "ans = %c\n", stack->pop(stack));
  // }

  release_container(input);
  return 0;
}