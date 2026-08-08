#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {

        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (i == rows || j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
