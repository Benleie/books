问:
任何指针的sizeof大小都相同，那为什么还要有各自的类型,意义何在？




## 13file
+ 文件格式：文本格式，二进制格式。
binary mode读取文件的每一个字节；文本文件在换行符的表示上，不同系统有较大差异
unix和C：\n;   MS-DOS:\r\n,结束用CTRL+Z
\r回车符，\n换行符。

+ standard I/O  输入输出是buffered. generally 512bytes.  
对应复杂的low-level I/O，read()和write(),直接调用系统API

+ 13.1 GG,VS怎样输入参数？
用rb格式读入books.md，一个换行符算两个字符。r模式算一个.

+ pointer fp points to a data object.
getchar() == getc(stdin)
EOF检测是否到了文件尾.选择一个int类型的数与之比较。
fclose如果失败,会返回EOF.

fgets(buf, STLEN, fp);
+ rewind
文件内部的位置指针会随着读写不断后移。

#### 04reverse.c
`int fseek(FILE *stream, long offset, int fromwhere);`
ftell一般用于读取文件的长度,返回的是当前文件指针指向的位置。

#### how standard i/o work
+ stdin , stdout , and stderr files are opened automatically.
+ fopen打开文件流，针对读写各自创建一个buffer，并创建包含该buffer和文件的数据结构，再返回该数据结构的指针。


+ `int fflush(FILE *fp)`;将缓冲区的内容移入fp指向的文件流。fp若是null pointer,则刷新缓冲区。

## 11
核心问题：字符读入的溢出问题有哪些表现，应该怎样解决？

#### 11.7
如果输入字符串足够短，puts()在字符串后面添加\n\0,会产生一个空行.
fputs()不会。

#### 11.8
fgets()返回正在读取的字符串地址，读到EOF就返回NULL或0

#### 11.9 用fgets()实现超出部分的截取
null character即"\0",C字符串的结束标志




## 17
### 17.2一跑就崩就重新启动？程序结束那部分有问题
原因是因为在free(current)释放这块堆内存后还`current = current->next;`继续使用了这个野指针。而阿杰的GCC完全忽略了这个问题，无BUG运行。原因是我的cl.exe编译器在free完之后直接回收调堆内存，并禁止通过剩余的野指针访问；而GCC回收内存到free list后却依然能访问。。MS爸爸果然是贴心过度，妈妈再也不用担心我的野指针乱指了。



## 14

结构体定义用分号，初始化用逗号；
14.1fget(),  14.2 `getchar() != '\n'`，输入技巧
`p->element == (*p).element`
结构体与函数：
+ more feature： 同类型的结构体之间赋值，而数组不能赋值；
+ 传指针效率高，也可能会改动到原始数据
+ 存储字符串是尽量用字符串数组，而非指向字符串的指针

用结构体来保存数据 14.14





10.1 逗号可以轻松换行，有JS的风格
如何想JS动态数组那样，随时push一个值进来？   malloc
访问内存地址会什么格式字符？   %p

10.9 *(arr + index) == arr[index]   
10.18 VS并不允许用变量定义静态数组大小