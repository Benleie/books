//下面的算法来自《大话数据结构》
// 2017/12/01


void Prim(MGraph G)
{
	int i, j, k, min;
	int adjvex[MAXVEX];
	int lowcost[MAXVEX];   //边的权值
	lowcost[0] = 0;
	adjvex[0] = 0;
	for(i = 1; i < G.numVertexes; i++)
	{
		lowcost[i] = G.arc[0][i];
		adjvex[i] = 0;
	}
	for(i = 1; i < G.numVertexes; i++)
	{
		min = INFINITY;
		j = 1;
		k = 0;
		while(j < G.numVertexes)
		{
			if(lowcost[j] != 0 && lowcost[j] < min)
			{
				min = lowcost[j];
				k = j;
			}
			j++;
		}
		printf("(%d,%d)",adjvex[k],k);
		lowcost[k] = 0;
		for(i = 1; i < G.numVertexes; i++)
		{
			//still to do
		}
	}
}