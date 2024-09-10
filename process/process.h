#include "../config.h"

#ifndef PROCESS_H
#define PROCESS_H


/*
 *打印一段话，简单介绍一下这个计算器
 *比如
 *  <------------------\t计算器\t------------------>
 * 自己想吧，觉得看的过去就行
 */
void greeting();


//todo! 这一串逻辑待定
enum function_state parce_input(char* input );            //处理获取的输入。需要用东西来存储处理后的数据



#endif