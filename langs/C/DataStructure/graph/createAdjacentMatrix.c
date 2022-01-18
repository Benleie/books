#define eleType char
struct vextex {
	int num;
	eleType data;
}
typedef struct {
	struct vextex vexs[MAX];
	int edges[MAX][MAX];
	int vexnum, arcnum;
} adjMatrix;

adjMatrix createGraph()
{
	
}



