#include <stdio.h>

int main()
{
    int a, b, difference;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    difference = a - b;

    printf("Difference = %d\n", difference);

    return 0;
}
