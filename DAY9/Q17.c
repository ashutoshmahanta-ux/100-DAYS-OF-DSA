#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, length;

    // taking input from the user
    printf("Enter the code name: ");
    scanf("%s", name);

    // finding length of string
    length = strlen(name);

    // printing the string in reverse order
    printf("Mirror code name: ");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }

    return 0;
}
