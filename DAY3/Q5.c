#include <stdio.h>

int main() {
    int n, i, k, count = 0;

    scanf("%d", &n);

    int arr[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        count++;
        if (arr[i] == k) {
            printf("Found at index %d\n", i);
            printf("Comparisons = %d", count);
            return 0;
        }
    }

    printf("Not Found\n");
    printf("Comparisons = %d", count);

    return 0;
}
