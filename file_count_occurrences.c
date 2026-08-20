#include <stdio.h>

int main() {
    FILE *file;
    char ch, search;
    int count = 0;

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File not found.");
        return 1;
    }

    printf("Enter character to count: ");
    scanf(" %c", &search);

    while ((ch = fgetc(file)) != EOF) {
        if (ch == search) {
            count++;
        }
    }

    printf("Character '%c' occurs %d times.", search, count);

    fclose(file);

    return 0;
}
