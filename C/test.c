#include <stdio.h>
#include <string.h>
int a[3][3] = {1,2,3,4,5,6,7,8,9},b[10];
int w = 3;
void f(int s[], int p[][3])
{
	s[0] = p[1][1];
}

/*void fun(char s[])
{
	int x,y;
	char c;
	for(x = 0,y = strlen(s)-1;x<y; x++,y--)
	{
		c = s[y];
		s[y] = s[x];
		s[x] = c;
	}
}


*/


void main()
{
	int w = 10;
	f(b,a);
	printf("%d\n", b[0]);
	//printf("%c\n", 'p' - ('A' - 'a'));
	printf("3-0== %d\n",'3'-'0' );
	printf("%d\n", w);
	int k, i;
	k = 0;
	k = k + i;
	i = i + 10;
	printf("%d", k);
	getchar();
}






