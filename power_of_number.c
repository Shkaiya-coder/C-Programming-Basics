#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    printf("%d^%d = %lld", base, exponent, result);

    return 0;
}
