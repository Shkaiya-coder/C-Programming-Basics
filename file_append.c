#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    file = fopen("data.txt", "a");

    if (file == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    printf("Enter text to append: ");
    scanf(" %99[^\n]", text);

    fprintf(file, "\n%s", text);

    fclose(file);

    printf("Data appended successfully.");

    return 0;
}
