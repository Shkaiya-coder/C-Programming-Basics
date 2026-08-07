#include <stdio.h>

int main() {
    float length, width, perimeter;

    printf("Enter the length: ");
    scanf("%f", &length);

    printf("Enter the width: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

    printf("Perimeter of the rectangle = %.2f", perimeter);

    return 0;
}
