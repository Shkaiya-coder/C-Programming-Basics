#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int count = 0;

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    fclose(file);

    printf("Number of characters = %d", count);

    return 0;
}
