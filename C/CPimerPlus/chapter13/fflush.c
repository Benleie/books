//https://my.oschina.net/deanzhao/blog/79790

//一旦输入字符，字符将被遗留到stdin,从而使scanf自动读取缓冲的字符。
#include <stdio.h>
int main(void)
{
	int i;

	for (;;)
	{
		fputs("Please input an integer: ", stdout);
		scanf("%d", &i);
		printf("%d\n", i);
		//fflush(stdin);
	}

	return 0;
}




//替代方法
#include <stdio.h> 
int main(void)
{
	int i, c;
	for (;;)
	{
		fputs("Please input an integer: ", stdout);
		scanf("%d", &i);

		if (feof(stdin) || ferror(stdin))
		{ /* 如果用户输入文件结束标志（或文件已被读完）， */
			/* 或者发生读写错误，则退出循环             */

			/* do something */
			break;
		}
		/* 没有发生错误，清空输入流。                 */
		/* 通过 while 循环把输入流中的余留数据“吃”掉 */
		while ((c = getchar()) != '\n' && c != EOF);    /*可直接将这句代码当成fflush(stdio)的替代，直接运行可清除输入缓存流*/
		/* 使用 scanf("%*[^\n]"); 也可以清空输入流， */
		/* 不过会残留 \n 字符。                          */

		printf("%d\n", i);
	}

	return 0;
}



//cplusplus例子
#include <stdio.h>
char mybuffer[80];
int main()
{
	FILE * pFile;
	pFile = fopen("books.md", "r+");
	if (pFile == NULL) perror("Error opening file");
	else {
		fputs("test", pFile);
		fflush(pFile);    // flushing or repositioning required
		fgets(mybuffer, 80, pFile);
		fputs(mybuffer, stdout);
		fclose(pFile);
		getchar();
		return 0;
	}
}