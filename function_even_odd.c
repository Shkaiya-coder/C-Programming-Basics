#include <stdio.h>

void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is Even", number);
    } else {
        printf("%d is Odd", number);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkEvenOdd(number);

    return 0;
}
