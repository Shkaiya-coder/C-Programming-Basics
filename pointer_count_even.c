#include <stdio.h>

int countEven(int *arr, int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[5];
    int count;

    printf("Enter 5 elements:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    count = countEven(arr, 5);

    printf("Number of even elements = %d", count);

    return 0;
}
