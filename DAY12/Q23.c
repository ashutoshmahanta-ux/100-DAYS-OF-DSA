#include <stdio.h>

int main()
{
    int rows, cols;
    int matrix[50][50];
    int flag = 1;   // assuming symmetric

    // taking rows and columns separately
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // the symmetric matrix must be in squares
    if (rows != cols)
    {
        printf("Not a Symmetric Matrix");
        return 0;
    }

    // the input of the matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // checking symmetry condition
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    // the final output result
    if (flag == 1)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");

    return 0;
}
