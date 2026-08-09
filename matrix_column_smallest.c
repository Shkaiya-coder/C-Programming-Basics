#include <stdio.h>

int main() {
    int rows, columns;
    int matrix[10][10];

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

    printf("Smallest element in each column:\n");

    for (int j = 0; j < columns; j++) {
        int smallest = matrix[0][j];

        for (int i = 1; i < rows; i++) {
            if (matrix[i][j] < smallest) {
                smallest = matrix[i][j];
            }
        }

        printf("Column %d = %d\n", j + 1, smallest);
    }

    return 0;
}
