//不会使用是命令行输入，于是
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h> // exit() prototype
#define N 20
int main(void)
{
	int ch; // place to store each character as read
	FILE *fp; // "file pointer"
	unsigned long count = 0;
	char file[N] = "books.md";
	if ((fp = fopen(file, "r")) == NULL)
	{
		printf("Can't open %s\n", file);
		getchar();
		exit(EXIT_FAILURE);
	}
	
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout); // same as putchar(ch);
		count++;
	}
	fclose(fp);
	printf("\n\nFile %s has %lu characters\n", file, count);
	getchar();
	return 0;
}







#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h> // exit() prototype
int main(int argc, char *argv[])
{
	int ch; // place to store each character as read
	FILE *fp; // "file pointer"
	unsigned long count = 0;
	getchar();
	if (argc != 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		getchar();
		getchar();
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[1]);
		getchar();
		getchar();
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout); // same as putchar(ch);
		count++;
	}
	fclose(fp);
	printf("File %s has %lu characters\n", argv[1], count);
	getchar();
	getchar();
	return 0;
}