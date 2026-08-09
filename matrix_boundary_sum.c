#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int sum = 0;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("Sum of boundary elements = %d", sum);

    return 0;
}
