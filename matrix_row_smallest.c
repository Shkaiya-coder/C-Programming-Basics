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

    printf("Smallest element in each row:\n");

    for (int i = 0; i < rows; i++) {
        int smallest = matrix[i][0];

        for (int j = 1; j < columns; j++) {
            if (matrix[i][j] < smallest) {
                smallest = matrix[i][j];
            }
        }

        printf("Row %d = %d\n", i + 1, smallest);
    }

    return 0;
}
