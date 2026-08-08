#include <stdio.h>

int main() {
    int n, i, smallest;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Smallest element = %d", smallest);

    return 0;
}
