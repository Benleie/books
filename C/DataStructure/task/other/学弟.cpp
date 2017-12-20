//#include "stdafx.h"
#include <stdio.h>
#include <malloc.h>
#define Maxcol 10          
  
typedef struct Node1            
{
	typedef int ElemType;
	ElemType data[Maxcol];      
	struct Node1*next;          
}DList;                        
 
typedef struct Node2
{
	int Row, Col;            
	DList*next;             
}HList;                         

typedef int ElemType;

void CreateTable(HList*&h)
{
	int i, j;
	DList *r, *s;
	r = (DList*)malloc(sizeof(DList));
	r->next = NULL;
	h = (HList*)malloc(sizeof(HList));
	printf("input: ");
	scanf_s("%d%d",&h->Row, &h->Col);
	for (i = 0; i < h->Row; i++)
	{
		printf("%d col:", i + 1);
		 
		s = (DList*)malloc(sizeof(DList));
		for (j = 0; j < h->Col; j++)
			scanf_s("%d", &s->data[j]);
		if (h->next == NULL)
			h->next = s;
		else
			r->next = s;
		r = s;
	}
	r->next = NULL;
}
 
void DestoryTable(HList*&h)
{
	DList *pre = h->next, *p = pre->next;
	while (p != NULL)
	{
		free(pre);
		pre = p;
		p = p->next;
	}
	free(pre);
	free(h);
}
 
void DispTable(HList*h)
{
	int j;
	DList*p = h->next;
	while (p != NULL)
	{
		for (j = 0; j < h->Col; j++)
			printf("%4d", p->data[j]);
		printf("\n");
		p = p->next;
	}
}
 
void LinkTable(HList*h1, HList*h2, HList*&h)
{
	int i, j, k;
	DList *p = h1->next, *q, *s, *r;
	printf("number: ");
	scanf_s("%d%d", &i, &j);
	h = (HList*)malloc(sizeof(HList));
	r = (DList*)malloc(sizeof(DList));
	r->next = NULL;
	h->Row = 0;
	h->Col = h1->Col + h2->Col;
	h->next = NULL;
	while (p != NULL)
	{
		q = h2->next;
		while (q!= NULL)
		{
			if (p->data[i - 1] == q->data[j - 1])
			{
				s = (DList*)malloc(sizeof(DList));
				for (k = 0; k < h1->Col; k++)
					s->data[k] = p->data[k];
				for (k = 0; k < h2->Col; k++)
					s->data[h1->Col + k] = q->data[k];
				if (h->next == NULL)
					h->next = s;
				else
					r->next = s;
				r = s;
				h->Row++;
			}
			q = q->next;
		}
		p = p->next;
	}
	r->next = NULL;
}
 
void main()
{
	HList*h1, *h2, *h;
	printf("table1\n");
	CreateTable(h1);
	printf("table2\n");
	CreateTable(h2);
    LinkTable(h1,h2,h );
	printf("result\n");
	DispTable(h);
	DestoryTable(h1);
	DestoryTable(h2);
	DestoryTable(h);
}
