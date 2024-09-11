#include "../calculate/calculate.h"
#include "../struct/contain/contain.h"
#include "../struct/stack/stack.h"
#include <ctype.h>
#include <stdio.h>

void greeting() { fprintf(stdout, "this is a calculator\n"); }

int analyze(Container *input) {
  char ch = input->input[input->pc];
  if (isdigit(ch)) {
    return 0;
  } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
    return 1;
  }
}

void calculate(Stack *stack, Container *input) {
  char b = stack->pop(stack);
  char a = stack->pop(stack);

  char op = input->input[input->pc];

  char ans;
  switch (op) {
  case '+':
    ans = add(&a, &b);
    stack->push(stack, ans);
    break;
  case '-':
    ans = sub(&a, &b);
    stack->push(stack, ans);
    break;
  case '*':
    ans = multiply(&a, &b);
    stack->push(stack, ans);
    break;
  case '/':
    ans = divided(&a, &b);
    stack->push(stack, ans);
    break;
  case '%':
    ans = remaind(&a, &b);
    stack->push(stack, ans);
    break;
  }
  return ;
}
