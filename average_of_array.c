#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    printf("Average of array elements = %.2f", average);

    return 0;
}
