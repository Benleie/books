#include <stdio.h>
void func(int *ss)
{
	printf("ss=%d\t", *ss);
	*ss = 44;
}

int main()
{
	int *s;
	static char a[] = "program";
	char *str = a;
	for (; str < a + 7; str += 2)
	{
		putchar(*str);
	}
	


	getchar();
	return 0;
}

/*
char *aa[2] = { "asdf", "ASDF" };
char s[20] = "programming", *ps = s;
printf("%c", ps[2]);


char *p = "abc", *p = "ABC", str[50] = "xyz";
strcpy(str + 2, strcat(p1, p2));////////
printf("%s\n", str);



char *sp = "\"D:  \\ANI.WPS\"";
printf("%s", sp);



int x = 1;
func(&x);
printf("%d\n", x);
int a[5] = { 2, 3, 5, 7, 11 }, *p = a + 4;
printf("%d\n", *p);
char string1[20] = "How do you do?", string2[20] = { "are you!" };
strcpy(string1+4, string2);
printf("=%s\n", string1);
char string1[20], string2[20] = { "ABCDEF" };
	strcpy(string1, string2);
	printf("=%s\n", string1 + 3);





int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int *p = a, ss = 23;




//printf("%d,  ss=%d\n",*(p+8) ,++ss);

int b[] = { 2, 3, 5, 9, 11, 13 }, *pp = b, w;
w = ++(*++pp);
printf("w=%d *pp=%d\n", w, *pp);

int a23 = 23, *p23 = &a23;
*p23 = a23 + 1;
printf("a23=%d\n", a23);


*/