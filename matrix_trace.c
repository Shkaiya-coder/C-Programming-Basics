#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int trace = 0;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        trace = trace + matrix[i][i];
    }

    printf("Trace of matrix = %d", trace);

    return 0;
}
