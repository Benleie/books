#include <stdio.h>
#define STLEN 14
int main()
{
	char *s = "GoldenGlobalView";
	char str[] = "You love C programming language! But I, hh:)";
	char words[STLEN] = "Damn world";
	char * p = str;
	
	printf("p=%p ++p=%p   p++=%p", p, ++p, p++);    //p=005EFAC1 ++p=005EFAC1   p++=005EFAC0
	p++;
	printf("  Now,p=%p \n", p);
	printf("s=%p, %s has %d chars\n", s, s, strlen(s));
	



	getchar();
	return 0;
	/*
	printf("first letter is %c, and str is %s\n", str[0], str);
	printf("length of str is %d, length of words is %d\n", strlen(str), strlen(words));
	*/
}



