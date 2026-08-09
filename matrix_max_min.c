#include <stdio.h>

int main() {
    int rows, columns;
    int matrix[10][10];
    int max, min;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];
    min = matrix[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }

            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
