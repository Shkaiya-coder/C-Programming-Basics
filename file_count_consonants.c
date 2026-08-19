#include <stdio.h>
#include <ctype.h>

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
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z' &&
            ch != 'a' && ch != 'e' &&
            ch != 'i' && ch != 'o' &&
            ch != 'u') {
            count++;
        }
    }

    printf("Number of consonants = %d", count);

    fclose(file);

    return 0;
}
