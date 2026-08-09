#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int isSymmetric = 1;

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
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }

        if (isSymmetric == 0) {
            break;
        }
    }

    if (isSymmetric == 1) {
        printf("The matrix is symmetric.");
    } else {
        printf("The matrix is not symmetric.");
    }

    return 0;
}
