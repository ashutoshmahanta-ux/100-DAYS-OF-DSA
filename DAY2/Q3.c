#include <stdio.h>

int main() {
    int n, i, pos;       // declaring variables
    int arr[100]; //assuming the array won't be larger than 100

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);

    // assuming input is valid. We loop until (n - 1) because
    // looking ahead at the next element (i + 1).
    for(i = pos - 1; i < n - 1; i++) {
        //coping the value from the right (i + 1) to the current spot (i)
        arr[i] = arr[i + 1];
    }

    // --- Output Logic ---

    for(i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);         // printing the array
    }

    return 0;
}