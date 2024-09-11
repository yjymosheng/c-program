#include "contain.h"
#include <stdio.h>
#include <stdlib.h>

static enum function_state get_input_container(Container* self);
static bool isempty (Container* self); //当input[pc]=='\0' 就表明已经遍历完了，是空的
static void contain_next(Container * self);

Container* init_container (){
    Container* s = (Container*) malloc(sizeof(Container));
    s->pc=0;
    s->input = (char*)malloc(sizeof(char)*MAXLINE);
    s->is_empty = &isempty;
    s->get_input = &get_input_container;
    s->next = &contain_next;
    return s;
}

static enum function_state get_input_container(Container* self){
    scanf("%s",self->input);
    self->pc=0;
    return Ok;
}
static bool isempty (Container* self){
    return (self->input[self->pc]=='\0');
} //当input[pc]=='\0' 就表明已经遍历完了，是空的
static void contain_next(Container * self){
    self->pc++;
    return ;
}
void release_container(Container* self){
    free(self->input);
    free(self);
}

void printf_contain(Container* self){
    printf("contain: %s\n",self->input+self->pc);
}