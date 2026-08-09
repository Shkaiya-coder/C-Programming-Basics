#include <stdio.h>

int main() {
    int n, i;
    int arr[100], copy[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        copy[i] = arr[i];
    }

    printf("Copied array:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }

    return 0;
}
