#include <stdio.h>

int sumArray(int *arr, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }

    return sum;
}

int main() {
    int arr[5];
    int sum;

    printf("Enter 5 elements:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    sum = sumArray(arr, 5);

    printf("Sum = %d", sum);

    return 0;
}
