#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int count = 0;

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File not found.");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {
            count++;
        }
    }

    printf("Number of vowels = %d", count);

    fclose(file);

    return 0;
}
