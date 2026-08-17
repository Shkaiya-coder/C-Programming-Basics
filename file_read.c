#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    fgets(text, sizeof(text), file);

    printf("Data from file: %s", text);

    fclose(file);

    return 0;
}
