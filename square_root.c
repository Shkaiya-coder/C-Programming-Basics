#include <stdio.h>
#include <math.h>

int main() {
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Square root is not possible for negative numbers.");
    } else {
        result = sqrt(number);
        printf("Square root of %.2lf = %.2lf", number, result);
    }

    return 0;
}
