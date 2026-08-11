#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("String is Palindrome");
    } else {
        printf("String is Not Palindrome");
    }

    return 0;
}
