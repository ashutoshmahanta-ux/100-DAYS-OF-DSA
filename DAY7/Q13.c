#include <stdio.h>

// thsi function is to calculate the fibonacci number using recursion
int findFibonacci(int num)
{
    if (num == 0)          // first fibonacci number
        return 0;
    else if (num == 1)     // second fibonacci number
        return 1;
    else
        return findFibonacci(num - 1) + findFibonacci(num - 2);
}

int main()
{
    int number;

    // input from the user
    printf("Enter the value of n: ");
    scanf("%d", &number);

    // displaying result
    printf("Fibonacci value at position %d is %d",
           number, findFibonacci(number));

    return 0;
}
