#include <stdio.h>


int main()
{
	

	union 
	{
		
		char c[2];
		int i;
	}x;
	x.c[0] = 2;
	x.c[1] = 0;
	printf("ssss=%d\n", x.i);

	getchar();
	return 0;
}



/*
union un
{
int a;
char c[2];
} w;
w.c[0] = 'A';
w.c[1] = 'a';
printf("%d", w.a);  /////


union un
{
int i;
double y;
};
struct st
{
char a[10];
union un b;
};
printf("%d", sizeof(struct st));


union p
{
int i;
char c[2];
} x;
x.c[0] = 13;
x.c[1] = 0;
printf("%d\n", x.i);
*/













