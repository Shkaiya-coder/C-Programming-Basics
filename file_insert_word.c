#include <stdio.h>
#include <string.h>

int main() {
    FILE *file, *temp;
    char line[200];
    char word[50];
    char new_word[50];

    file = fopen("data.txt", "r");
    temp = fopen("temp.txt", "w");

    if (file == NULL || temp == NULL) {
        printf("File error.");
        return 1;
    }

    printf("Enter word to search: ");
    scanf("%49s", word);

    printf("Enter word to insert after it: ");
    scanf("%49s", new_word);

    while (fgets(line, sizeof(line), file) != NULL) {
        char *position;

        position = strstr(line, word);

        if (position != NULL) {
            char remaining[200];

            strcpy(remaining, position + strlen(word));
            *(position + strlen(word)) = '\0';

            fprintf(temp, "%s %s%s", line, new_word, remaining);
        } else {
            fputs(line, temp);
        }
    }

    fclose(file);
    fclose(temp);

    remove("data.txt");
    rename("temp.txt", "data.txt");

    printf("Word inserted successfully.");

    return 0;
}
