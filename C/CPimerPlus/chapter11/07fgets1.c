//如果输入超出限制，会暂时存在stdin，然后在第二次继续从stdin读取。

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#define STLEN 14
int main(void)
{
	char words[STLEN];
	puts("Enter a string, please.");
	fgets(words, STLEN, stdin);
	printf("Your string twice (puts(), then fputs()):\n");
	puts(words);
	fputs(words, stdout);
	puts("Enter another string, please.");
	fgets(words, STLEN, stdin);
	printf("Your string twice (puts(), then fputs()):\n");
	puts(words);
	fputs(words, stdout);
	puts("Done.");
	getchar();
	return 0;
}