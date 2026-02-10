#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int left, right;
    int isPalindrome = 1;   // assume palindrome initially

    // ask user for input
    printf("Enter a string: ");
    scanf("%s", s);

    left = 0;
    right = strlen(s) - 1;

    // compare characters from both ends
    while (left < right)
    {
        if (s[left] != s[right])
        {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        printf("YES");
    else
        printf("NO");

    return 0;
}
