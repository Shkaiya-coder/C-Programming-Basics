#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char line[200];
    char search[50];
    int count = 0;

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File not found.");
        return 1;
    }

    printf("Enter word to search: ");
    scanf("%49s", search);

    while (fgets(line, sizeof(line), file) != NULL) {
        if (strstr(line, search) != NULL) {
            count++;
        }
    }

    printf("Number of lines containing the word = %d", count);

    fclose(file);

    return 0;
}
