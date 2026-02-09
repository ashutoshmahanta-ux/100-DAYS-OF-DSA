#include <stdio.h>

// recursing function to calculate power
int calculatePower(int base, int power)
{
    if (power == 0)        // here is teh base case
        return 1;
    else
        return base * calculatePower(base, power - 1);
}

int main()
{
    int a, b;

    // input from the user
    printf("Enter base and power: ");
    scanf("%d %d", &a, &b);

    // this is to print result
    printf("Result: %d", calculatePower(a, b));

    return 0;
}
