#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int words = 0;
    int inWord = 0;

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch != ' ' && ch != '\n' && ch != '\t') {
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    fclose(file);

    printf("Number of words = %d", words);

    return 0;
}
