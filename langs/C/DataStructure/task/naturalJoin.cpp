#include <stdio.h>
#include <stdlib.h>
#include "naturalJoin.h"



void main()
{
	HList * h1, * h2, *h;
	printf("table1: \n");
	CreateTable(h1);
	printf("table2：\n");
	CreateTable(h2);
	LinkTable(h1, h2, h);
	printf("LinkedTable:\n");
	DispTable(h);         
	DestroyTable(h1);
	DestroyTable(h2);
	DestroyTable(h);
}








