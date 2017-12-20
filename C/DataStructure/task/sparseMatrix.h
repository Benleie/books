
#define M 6
#define N 7
#define MaxSize 7

typedef int ElemType;
typedef struct 
{
	int r;
	int c;
	ElemType d;
} TupNode;
typedef struct 
{
	int rows;
	int cols;
	int nums;
	TupNode data[MaxSize];
} TSMatrix;

void CreateSparseMatrix(TSMatrix &t, ElemType A[M][N])
{
	int i,j;
	t.rows = M;
	t.cols = N;
	t.nums = 0;
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(A[i][j] != 0)
			{
				t.data[t.nums].r = i;
				t.data[t.nums].c = j;
				t.data[t.nums].d = A[i][j];
				t.nums++;
			}
		}
	}
}


void DispMatrix(TSMatrix t)
{
	int i;
	if(t.nums <= 0)	return;
	printf("\t%d \t%d \t%d\n", t.rows, t.cols, t.nums);
	printf("\t---------------\n");
	for(i=0; i<t.nums; i++)
		printf("\t%d \t%d \t%d\n", t.data[i].r, t.data[i].c, t.data[i].d);
}

void TranMatrix(TSMatrix t, TSMatrix &tb)
{
	int p, q = 0, v;
	tb.rows = t.cols;
	tb.cols = t.rows;
	tb.nums = t.nums;
	if(t.nums != 0)
	{
		for(v=0; v<t.cols; v++)
			for(p=0; p<t.nums; p++)
				if(t.data[p].c == v)
				{
					tb.data[q].c = t.data[p].r;
					tb.data[q].r = t.data[p].c;
					tb.data[q].d = t.data[p].d;
					q++;
				}
	}
}




















