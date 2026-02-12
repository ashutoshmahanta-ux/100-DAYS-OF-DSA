#include <stdbool.h>

bool isToeplitzMatrix(int** mat, int rSize, int* cSize)
{
    int r = rSize;
    int c = cSize[0];

    // checking diagonals starting from first row
    for (int col = 0; col < c; col++)
    {
        int value = mat[0][col];
        int i = 1, j = col + 1;

        while (i < r && j < c)
        {
            if (mat[i][j] != value)
                return false;
            i++;
            j++;
        }
    }

    // checking diagonals starting from first column (excluding [0][0])
    for (int row = 1; row < r; row++)
    {
        int value = mat[row][0];
        int i = row + 1, j = 1;

        while (i < r && j < c)
        {
            if (mat[i][j] != value)
                return false;
            i++;
            j++;
        }
    }

    return true;
}
