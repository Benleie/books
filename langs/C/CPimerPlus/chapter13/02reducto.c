#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 30
int main(int argc, char *argv[])
{
	FILE *in, *out; // declare two FILE pointers
	int ch;
	char name[LEN] ; // storage for output filename
	int count = 0;
	char input[LEN] = "books.md";
	
	// set up input
	if ((in = fopen(input, "r")) == NULL)
	{
		fprintf(stderr, "I couldn't open the file \"%s\"\n",
			input);
		exit(EXIT_FAILURE);
	}
	// set up output
	strncpy(name, input, LEN - 5); // copy filename
	name[LEN - 5] = '\0';
	strcat(name, ".red"); // append .red
	if ((out = fopen(name, "w")) == NULL)
	{ // open file for writing
		fprintf(stderr, "Can't create output file.\n");
		exit(3);
	}
	// copy data
	while ((ch = getc(in)) != EOF)
	if (count++ % 3 == 0)
		putc(ch, out); // print every 3rd char
	// clean up
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");
	return 0;
}