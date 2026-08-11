#include <stdio.h>

int main() {
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    ptr = str;

    printf("String using pointer: ");

    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}
