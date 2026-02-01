#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[10000];
    int i, j;

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    return 0;
}

