#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char word[50];
    char search[50];
    int count = 0;

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File not found.");
        return 1;
    }

    printf("Enter word to count: ");
    scanf("%49s", search);

    while (fscanf(file, "%49s", word) == 1) {
        if (strcmp(word, search) == 0) {
            count++;
        }
    }

    printf("Word '%s' occurs %d times.", search, count);

    fclose(file);

    return 0;
}
