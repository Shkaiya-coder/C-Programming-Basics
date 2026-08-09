#include <stdio.h>

int main() {
    int rows, columns;
    int matrix[10][10];
    int count = 0;

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

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i == 0 || i == rows - 1 ||
                j == 0 || j == columns - 1) {
                count++;
            }
        }
    }

    printf("Number of boundary elements = %d", count);

    return 0;
}
