#include <stdio.h>

int main() {
    int rows1, columns1, rows2, columns2;
    int a[10][10], b[10][10], result[10][10];

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &columns1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &columns2);

    if (columns1 != rows2) {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;

            for (int k = 0; k < columns1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of matrices:\n");

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
