#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
int main(void)
{
	FILE *fp;
	char words[MAX];
	if ((fp = fopen("books.md", "a+")) == NULL)
	{
		fprintf(stdout, "Can't open \"books.md\" file.\n");
		exit(EXIT_FAILURE);
	}
	puts("Enter words to add to the file;");
	puts("press the \"#\" key at the beginning of a line to terminate.");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp, "%s\n", words);
	puts("File contents:");
	rewind(fp); /* go back to beginning of file */
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done!");
	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	getchar();
	getchar();
	return 0;
}