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

int isPalindrome(int n) {
    if (n == reverse(n)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n)) {
        printf("%d is Palindrome", n);
    } else {
        printf("%d is Not Palindrome", n);
    }

    return 0;
}
