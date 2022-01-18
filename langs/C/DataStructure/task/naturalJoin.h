#define MaxCol 10
typedef int ElemType;
typedef struct Nodel
{
	ElemType data[MaxCol];
	struct Nodel *next;
} Dlist;

typedef struct Node2
{
	int Row, Col;
	Dlist * next;
} HList;

void CreateTable(HList * &h)
{
	int i,j;
	Dlist * r, * s;
	h = ( HList *) malloc(sizeof(HList));
	printf("input number of rows and columns: ");
	scanf("%d%d", &h->Row, &h->Col);
	for(i=0; i<h->Row; i++)
	{
		printf("%d row  ", i+1);
		s = (Dlist *)malloc(sizeof(Dlist));
		for(j = 0; j<h->Col; j++)
			scanf("%d", &s->data[j]);
		if(h->next == NULL)
			h->next == s;
		else
			r->next = s;
		r = s;
		printf("sss\n");
	}
	r->next = NULL;
}


void DestroyTable(HList *&h)
{
	Dlist *pre = h->next, *p = pre->next;
	while(p != NULL)
	{
		free(pre);
		pre = p;
		p = p->next;
	}
	free(pre);
	free(p);
}

void DispTable(HList *h)
{
	int j;
	Dlist *p = h->next;
	while(p != NULL)
	{
		for(j = 0; j<h->Col; j++)
			printf("%4d", p->data[j]);
		printf("\n");
		p = p->next;
	}
}
void LinkTable(HList *h1, HList *h2, HList *&h)
{
	int i, j, k;
	Dlist *p = h1->next, *q, *s, *r;
	printf("number:");
	scanf("%d%d", &i, &j);
	h = (HList *)malloc(sizeof(HList));
	h->Row = 0;
	h->Col = h1->Col + h2->Col;
	h->next = NULL;
	while(p != NULL)
	{
		q = h2->next;
		while(q != NULL)
		{
			if(p->data[i-1] == q->data[j-1])
			{
				s = (Dlist *)malloc(sizeof(Dlist));
				for(k=0; k<h1->Col; k++)
					s->data[k] = p->data[k];
				for(k=0; k<h2->Col; k++)
					s->data[h1->Col + k] = q->data[k];
				if(h->next == NULL)
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













