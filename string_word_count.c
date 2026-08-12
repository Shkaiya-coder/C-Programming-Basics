#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int inWord = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            if (inWord == 0) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Number of words = %d", count);

    return 0;
}
