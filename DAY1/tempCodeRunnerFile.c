#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];

    //reading the n numbers and store them in the array
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos; // position where we want to insert
    int x;   // number we want to insert

    scanf("%d", &pos);
    scanf("%d", &x);

    // shifting elements one step to the right
    // starting from the last element and go backwards
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // now putting x in its correct place
    // pos is 1-based, array index is 0-based, so use pos - 1
    arr[pos - 1] = x;

    // now array has n + 1 elements, so print all of them
    for (i = 0; i < n + 1; i++) {
        printf("%d", arr[i]);
        if (i != n) {  // printing space after each number except last
            printf(" ");
        }
    }

    return 0;
}