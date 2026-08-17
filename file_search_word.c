#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char word[50], search[50];

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File not found.");
        return 1;
    }

    printf("Enter word to search: ");
    scanf("%s", search);

    while (fscanf(file, "%49s", word) == 1) {
        if (strcmp(word, search) == 0) {
            printf("Word found.");
            fclose(file);
            return 0;
        }
    }

    printf("Word not found.");

    fclose(file);

    return 0;
}
