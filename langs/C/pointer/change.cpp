//https://www.cnblogs.com/heat-man/p/4646051.html
//pointer
#include<stdio.h>
void changeSucceed(int *   &pp)
{
        int b=7;
        printf("Change pp=%p &pp=%p\n", pp, &pp);
        pp = &b;
}
int main()
{
        int *p=NULL;
        int a=5;
        p = &a;
        printf("main p=%p &p=%p\n", p, &p);
        changeSucceed(p);
        printf("%d\n",*p);   //5
        getchar();
        return 0;
}