#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix after 90 degree rotation:\n");

    for (j = 0; j < n; j++) {
        for (i = n - 1; i >= 0; i--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
