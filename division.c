#include <stdio.h>

int main()
{
    float a, b, quotient;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    quotient = a / b;

    printf("Quotient = %.2f\n", quotient);

    return 0;
}
