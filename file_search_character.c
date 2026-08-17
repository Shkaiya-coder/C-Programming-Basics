#include <stdio.h>

int main() {
    FILE *file;
    char ch, search;

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File not found.");
        return 1;
    }

    printf("Enter character to search: ");
    scanf(" %c", &search);

    while ((ch = fgetc(file)) != EOF) {
        if (ch == search) {
            printf("Character found.");
            fclose(file);
            return 0;
        }
    }

    printf("Character not found.");

    fclose(file);

    return 0;
}
