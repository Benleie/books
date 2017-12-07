#include <stdio.h>
#define MaxCol 10
typedef int ElemType;
typedef struct Nodel
{
	ElemType data[MaxCol];
	struct Nodel *next;
} Dlsit;

typedef struct Node2
{
	int Row, Col;
	Dlist * next;
} HList;


void main()
{
	HList * h1, * h2, *h;
	printf("表1：\n");
	CreateTable(h1);
	printf("表2：\n");
	CreateTable(h2);
	LinkTable(h1, h2, h);
	printf("连接结果表:\n");
	DispTable(h);         //输出连接结果；
	Destroy(h1);
	Destroy(h2);
	Destroy(h);
}

void CreateTable(HList * &h)
{
	int i,j;
	Dlist * r, * s;
	h = ( HList *) malloc(sizeof(HList));
	printf("表的行数，列数：")；
	
}






