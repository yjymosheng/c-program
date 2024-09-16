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
├── Vector   //一个自动递增的数组
|    ├── Vector.c   //Vector.h 的实现文件
|    ├── Vector.h   //Vector 的定义文件
|    ├── main.c   //Vector 的测试文件
|    └── Makefile   //用来编译、运行的make文件
├── LinkList //所有习题都在此文件夹下
|    ├── LinkList.c   //LinkList.h 的实现文件
|    ├── LinkList.h   //LinkList 的定义文件
|    ├── main.c   //LinkList 的测试文件
|    └── Makefile   //用来编译、运行的make文件
├── Makefile  //编译文件的助手
├── README.md
└── test //所有测例都在此文件夹下
```


## Ch1 :  简单计算器的编写 （涉及栈的应用）

## Ch2 :  简单选课系统的编写 （设计数据结构的应用）


