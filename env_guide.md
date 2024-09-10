# C-ENV-guide for CAFUC

**注：本仓库仅用于学习**

# 环境搭建教程


### step1 安装文本编辑器


推荐VS code ，另有clion 等主流IDE（DEV还是尽量淘汰吧）

先下载安装包，然后双击打开安装包，点击 Next：

![](https://www.runoob.com/wp-content/uploads/2021/08/RdNbTSV.png)

选中接受协议选项，然后点击 Next：

![](https://www.runoob.com/wp-content/uploads/2021/08/QS0i03A.png)


选择安装路径，也可以直接使用默认的：

![](https://www.runoob.com/wp-content/uploads/2021/08/PJQW7JX.png)

点击 Next：

![](https://www.runoob.com/wp-content/uploads/2021/08/uETeoPN.png)

注意安装路径设置、环境变量默认自动添加到系统中，勾选以下所有选项：

![](https://www.runoob.com/wp-content/uploads/2021/08/RM04TZb.png)

最后我们点击 Install 就可以完成安装了：

![](https://www.runoob.com/wp-content/uploads/2021/08/4ySmHjw.png)

![](https://www.runoob.com/wp-content/uploads/2021/08/a0SB4Wc.png)  

#### 安装汉化包

VScode 安装汉化包很简单，打开 VScode，点击安装扩展，在搜索框输入 Chinese，然后点 Install 就可以：

![](https://www.runoob.com/wp-content/uploads/2021/08/8F3353F0-343A-4469-8EEB-DAD1A050BA2F.jpeg)



### step2 安装C语言编译器

**注：因为会设计一些GNU的其他工具，linux环境就会简单非常多（正经写代码很少用windows）**


MinGW-w64 是一个开源项目，它为 Windows 系统提供了一个完整的 GCC 工具链，支持编译生成 32 位和 64 位的 Windows 应用程序。GCC工具链就是GNU Compiler Collection

直接解压 x86_64-7.3.0-release-posix-sjlj-rt_v5-rev0.7z文件
![](img/jieya.jpg)

解压完成后，在 bin 目录里面就可以找到 g++.exe 或者 gcc.exe（我们真正需要的程序）：

![alt text](https://www.runoob.com/wp-content/uploads/2014/09/0c7bc6a0115ffa879f01885c9bbe6e75.png)

添加您安装的 MinGW 的 bin 子目录到您的 PATH 环境变量中，这样您就可以在命令行中通过简单的名称来指定这些工具。

通过win+i打开设置界面，搜索“环境变量”，选中第一个

![alt text](https://www.runoob.com/wp-content/uploads/2014/09/c3452d2b6a990b107498381ccfef5bd4.png)

为了使项目中的Makefile 文件发挥作用，我们需要创建的复制，并将复制的文件命名为make.exe

![](img/mingming.jpg)


