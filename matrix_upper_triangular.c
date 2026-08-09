#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int isUpper = 1;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                isUpper = 0;
                break;
            }
        }

        if (isUpper == 0) {
            break;
        }
    }

    if (isUpper == 1) {
        printf("The matrix is an upper triangular matrix.");
    } else {
        printf("The matrix is not an upper triangular matrix.");
    }

    return 0;
}
