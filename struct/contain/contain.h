#include "../../config.h"

#ifndef CONTAIN_H
#define CONTAIN_H

typedef struct {
  char * pc;
   char input [MAXLINE];
} Container;

Container* init_container ();

enum function_state get_input_container(Container* self);

#endif