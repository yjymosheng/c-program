#include "contain.h"
#include <stdio.h>
#include <stdlib.h>

static enum function_state get_input_container(Container* self);
static bool isempty (Container* self); //当input[pc]=='\0' 就表明已经遍历完了，是空的
static void contain_next(Container * self);

Container* init_container (){
    Container* s = (Container*) malloc(sizeof(Container));
    s->pc=0;
    for (int i=0; i<MAXLINE; ++i) {
        s->input[i] = '\0';
    }
    s->is_empty = &isempty;
    s->get_input = &get_input_container;
    s->next = &contain_next;
    return s;
}

static enum function_state get_input_container(Container* self){
    char s[MAXLINE];
    scanf("%s",s);
    sprintf(self->input, s);
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
    free((Container*)self);
}
