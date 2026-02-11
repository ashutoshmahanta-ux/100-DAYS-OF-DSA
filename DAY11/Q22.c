int** transpose(int** matrix, int matrixSize, int* matrixColSize,
                int* returnSize, int** returnColumnSizes)
{
    int r = matrixSize;          // number of rows
    int c = matrixColSize[0];    // number of columns

    // result that matrix will have in 'c' rows
    *returnSize = c;

    // allocating column sizes for result
    *returnColumnSizes = (int*)malloc(c * sizeof(int));
    for (int x = 0; x < c; x++)
    {
        (*returnColumnSizes)[x] = r;
    }

    // allocating memory for transposed matrix
    int** ans = (int**)malloc(c * sizeof(int*));
    for (int i = 0; i < c; i++)
    {
        ans[i] = (int*)malloc(r * sizeof(int));
    }

    // filling transposed matrix
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < c; col++)
        {
            ans[col][row] = matrix[row][col];
        }
    }

    return ans;
}

