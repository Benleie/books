#include <stdio.h>
#include "sparseMatrix.h"

int A[6][7] = {
	{ 0, 0, 1, 0, 0, 0, 0 },
	{ 0, 2, 0, 0, 0, 0, 0 },
	{ 3, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 5, 0, 0, 0 },
	{ 0, 0, 0, 0, 6, 0, 0 },
	{ 0, 0, 0, 0, 0, 7, 4 },
};
int main()
{
	printf("damn world\n");
	TSMatrix sparseMatrix, transposedMatrix;
	CreateSparseMatrix(sparseMatrix, A);
	DispMatrix(sparseMatrix);
	TranMatrix(sparseMatrix,transposedMatrix);
	printf("\n");
	DispMatrix(transposedMatrix);
	getchar();
	return 0;
}








