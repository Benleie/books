#include<stdio.h>
int main()
{
	int *p;
	*p=100;
	
	printf("*&=%p  p=%p",*&p, p);  //相等
	getchar();
	return 0;
}
//GCC段错误，吐核