## file

如果读取失败，怎样判断并自行end？不然老是程序自己崩溃。


#### 8.2


+ `formatted I/O to unit open for unformatted transfers`？？？？
添加form="formatted"


+ sequential-access I/O to unit open for direct access???
read()添加rec参数。


+ input conversion error
先练写兮后练读，fortran就得慢慢磨:D
+ output statement overflows record.

