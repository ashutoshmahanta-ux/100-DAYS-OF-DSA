#include <stdio.h>

int main()
{
    int rows, cols;
    int firstMatrix[10][10];
    int secondMatrix[10][10];
    int sumMatrix[10][10];

    // taking matrix size from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            printf("Element [%d][%d]: ", r, c);
            scanf("%d", &firstMatrix[r][c]);
        }
    }

    // input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            printf("Element [%d][%d]: ", r, c);
            scanf("%d", &secondMatrix[r][c]);
        }
    }

    // matrix addition logic
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            sumMatrix[r][c] = firstMatrix[r][c] + secondMatrix[r][c];
        }
    }

    // displaying result
    printf("\nResultant Matrix after Addition:\n");
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            printf("%d ", sumMatrix[r][c]);
        }
        printf("\n");
    }

    return 0;
}
