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
        sum = sum + matrix[i][n - 1 - i];
    }

    printf("Sum of anti-diagonal = %d", sum);

    return 0;
}
