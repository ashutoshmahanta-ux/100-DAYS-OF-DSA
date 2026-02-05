#include <stdio.h>

int main() {
    int p, q;

    // input for first server log
    printf("Enter number of entries in server log 1: ");
    scanf("%d", &p);

    int log1[p];
    printf("Enter %d sorted arrival times for server log 1:\n", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &log1[i]);
    }

    // input for second server log
    printf("Enter number of entries in server log 2: ");
    scanf("%d", &q);

    int log2[q];
    printf("Enter %d sorted arrival times for server log 2:\n", q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &log2[i]);
    }

    int i = 0, j = 0;

    printf("Merged arrival log:\n");

    // merging both logs
    while (i < p && j < q) {
        if (log1[i] <= log2[j]) {
            printf("%d ", log1[i]);
            i++;
        } else {
            printf("%d ", log2[j]);
            j++;
        }
    }

    // here are the remaining elements
    while (i < p) {
        printf("%d ", log1[i]);
        i++;
    }

    while (j < q) {
        printf("%d ", log2[j]);
        j++;
    }

    return 0;
}
