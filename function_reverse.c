#include <stdio.h>

int reverse(int n) {
    int rev = 0;
    int digit;

    while (n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

int main() {
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = reverse(n);

    printf("Reverse = %d", result);

    return 0;
}
