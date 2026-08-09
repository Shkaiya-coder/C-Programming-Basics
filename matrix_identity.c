#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int isIdentity = 1;

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

            if (i == j && matrix[i][j] != 1) {
                isIdentity = 0;
            }

            if (i != j && matrix[i][j] != 0) {
                isIdentity = 0;
            }
        }
    }

    if (isIdentity == 1) {
        printf("The matrix is an identity matrix.");
    } else {
        printf("The matrix is not an identity matrix.");
    }

    return 0;
}
