#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    printf("Enter text: ");
    scanf(" %99[^\n]", text);

    fprintf(file, "%s", text);

    fclose(file);

    printf("Data written successfully.");

    return 0;
}
