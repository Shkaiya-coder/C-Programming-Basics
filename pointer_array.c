#include <stdio.h>

int main() {
    int arr[5];
    int *ptr;

    printf("Enter 5 elements:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("Array elements using pointer:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
