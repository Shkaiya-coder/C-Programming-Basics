#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int isLower = 1;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][j] != 0) {
                isLower = 0;
                break;
            }
        }

        if (isLower == 0) {
            break;
        }
    }

    if (isLower == 1) {
        printf("The matrix is a lower triangular matrix.");
    } else {
        printf("The matrix is not a lower triangular matrix.");
    }

    return 0;
}
