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

            if (matrix[i][j] > 0) {
                count++;
            }
        }
    }

    printf("Number of positive elements = %d", count);

    return 0;
}
