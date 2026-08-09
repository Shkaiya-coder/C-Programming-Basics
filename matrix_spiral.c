#include <stdio.h>

int main() {
    int rows, columns;
    int matrix[10][10];
    int top, bottom, left, right;

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

    top = 0;
    bottom = rows - 1;
    left = 0;
    right = columns - 1;

    printf("Spiral order:\n");

    while (top <= bottom && left <= right) {

        // Left to right
        for (int j = left; j <= right; j++) {
            printf("%d ", matrix[top][j]);
        }
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Right to left
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                printf("%d ", matrix[bottom][j]);
            }
            bottom--;
        }

        // Bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    return 0;
}
