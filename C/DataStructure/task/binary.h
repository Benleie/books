#define MaxSize 30
typedef char ElemType;
typedef struct node
{
	ElemType data;
	struct node * lchild;
	struct node * rchild;
} BTNode;
void CreateBTNode(BTNode * &b, char *str)
{
	BTNode * St[MaxSize], *p;
	int top = -1, k, j = 0;
	char ch;
	b = NULL;
	ch = str[j];
	while(ch != NULL)
	{
		switch(ch)
		{
			case '(':	
				top++;
				St[top] = p;
				k = 1;
				break;
			case ')':
				top--;
				break;
			case ',':
				k = 2;
				break;
			default:
				p = (BTNode *)malloc(sizeof(BTNode));
				p->data = ch;
				p->lchild = p->rchild =  NULL;
				//p->rchild = NULL;
				if(b == NULL) b = p;
				else {
					switch(k)
					{
						case 1:
							St[top] -> lchild = p;
							break;
						case 2:
							St[top] -> rchild = p;
							break;
					}
				}

		}

		j++;
		ch = str[j];
	}
}

void DispBTNode(BTNode *b)
{
	if(b)
	{
		printf("%c", b -> data);
		if(b->lchild != NULL  || b->rchild != NULL)
		{
			printf("(");
			DispBTNode(b->lchild);
			if(b->rchild != NULL)	printf(",");
			DispBTNode(b->rchild);
			printf(")");
		}
	}
}

void PreOrder(BTNode *b)
{
	if(b != NULL)
	{
		printf("%c",b->data);
		PreOrder(b->lchild);
		PreOrder(b->rchild);
	}
}

void MidOrder(BTNode *b)
{
	if(b != NULL)
	{
		PreOrder(b->lchild);
		printf("%c", b->data);
		PreOrder(b->rchild);
	}
}

void PostOrder(BTNode *b)
{
	if(b != NULL)
	{
		PostOrder(b->lchild);
		PostOrder(b->rchild);
		printf("%c", b->data);
	}
}

BTNode * CreateBTreeByPreMid(char * pre, char *mid, int n)
{
	BTNode *b;
	char *p;
	int k;
	if(n <= 0) return NULL;
	b = (BTNode *)malloc(sizeof(BTNode));
	b->data = *pre;
	for(p = mid; p<mid+n; p++)
		if(*p == *pre) break;
	k = p - mid;
	b->lchild = CreateBTreeByPreMid(pre + 1, mid, k);
	b->rchild = CreateBTreeByPreMid(pre + k + 1, p + 1, n - k - 1);
	return b;
}