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

    printf("Sum of each row:\n");

    for (int i = 0; i < rows; i++) {
        int sum = 0;

        for (int j = 0; j < columns; j++) {
            sum = sum + matrix[i][j];
        }

        printf("Row %d = %d\n", i + 1, sum);
    }

    return 0;
}
