# C-program

## Ch0 :  简单数据结构的编写

1. Vector 一个可以自动变长的数组
2. LinkList 一个链式表，一个自动变长的“逻辑数组”
3. Stack_static   静态的栈，大小不会发生改变
4. Stack_dyn(amic)   动态的栈，大小会自动增加
5. Queue_static   静态的栈，大小不会发生改变
6. Queue_dyn(amic)   动态的栈，大小会自动增加

栈： 想象手枪压子弹的状态，刚压入的子弹在最上方，开枪打出消耗的也是最上方的子弹最先离开弹夹

队列： 想象一个食堂排队的状态，新来的排在队伍的末尾，打饭的从队伍的首位离开


项目结构

```shell
.
├── git.sh
├── LinkList
│   ├── LinkList.c                  //函数实现文件
│   ├── LinkList.h                  //函数定义文件
│   ├── main.c                      //测试文件
│   └── Makefile                    //编译文件
├── Makefile
├── Queue
│   ├── Queue_dyn
│   └── Queue_static
├── README.md
├── Stack
│   ├── Stack_dyn
│   │   ├── main.c                  //测试文件
│   │   ├── Makefile                //编译文件
│   │   ├── Stack_dynamic.c         //函数实现文件
│   │   └── Stack_dynamic.h         //函数定义文件
│   └── Stack_static
│       ├── main.c                  //测试文件
│       ├── Makefile                //编译文件
│       ├── Stack_static.c          //函数实现文件
│       └── Stack_static.h          //函数定义文件
└── Vector
    ├── main.c                      //测试文件
    ├── Makefile                    //编译文件
    ├── Vector.c                    //函数实现文件
    └── Vector.h                    //函数定义文件

```


## Ch1 :  简单计算器的编写 （涉及栈的应用）

## Ch2 :  简单选课系统的编写 （设计数据结构的应用）


