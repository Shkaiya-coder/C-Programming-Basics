#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int count = 0;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        if (matrix[i][i] != 0) {
            count++;
        }
    }

    printf("Number of non-zero diagonal elements = %d", count);

    return 0;
}
