//此函数可以用fgets()实现超出部分的截取
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define STLEN 10
int main(void)
{
	char words[STLEN];
	int i;
	puts("Enter strings (empty line to quit):");
	while (fgets(words, STLEN, stdin) != NULL
		&& words[0] != '\n')
	{
		i = 0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;
		if (words[i] == '\n')
			words[i] = '\0';
		else // must have words[i] == '\0'
			while (getchar() != '\n')
				continue;
		puts(words);
	}
	puts("done");
	getchar();
	return 0;
}