### C4047： `const char*`与int间接级别不同。
指针指向变量是一级间接寻址，指向指针就是二级间接寻址。

+ 在程序第一行加入：`#define _CRT_SECURE_NO_DEPRECATE`，就可以使用一些原生的函数。
在项目属性，C/C++,预编译器，预编译器定义处定义一个_CRT_SECURE_NO_DEPRECATE，一劳永逸。

## 引入自定义头文件
属性--C/C++--常规->附加包含目录--加入路径和文件名




hh.exe是什么鬼？