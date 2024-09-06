#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
	*returnSize = numRows;
	*returnColumnSizes = malloc(numRows * sizeof(int));

	int** triangle = malloc(numRows * sizeof(int*));
	for (int i = 0; i < numRows; i++) {
		triangle[i] = malloc((i+1) * sizeof(int));
		*returnSize += i+1;
		(*returnColumnSizes)[i] = i+1;
		triangle[i][0] = 1;
		triangle[i][i] = 1;
		for (int j = 1; j < i; j++) {
			triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
		}
	}
	return triangle;
}
