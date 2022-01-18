#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary.h"


int main()
{
	BTNode  *bb = NULL, *newTree = NULL;
	char *pre = "ABDGCEF", *mid = "DGBAECF" ;
	CreateBTNode(bb, "A(B(D(,G)),C(E,F))");
	DispBTNode(bb);
	printf("\n");
	PostOrder(bb);
	printf("\n");
	DispBTNode(CreateBTreeByPreMid(pre, mid, strlen(pre)));
	getchar();
	return 0;
}













