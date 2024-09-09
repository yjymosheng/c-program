#ifndef CONSOLE_H
#define CONSOLE_H

enum function_state {Err,Ok};
/*
 *打印一段话，简单介绍一下这个计算器
 *比如
 *  <------------------\t计算器\t------------------>
 * 自己想吧，觉得看的过去就行
 */
void greeting();

function_state get_input(char * input );            //用来获取输入的内容。正确返回OK， 错误返回Err。


//todo! 这一串逻辑待定
function_state parce_input(char* input, );            //处理获取的输入。需要用东西来存储处理后的数据



#endif