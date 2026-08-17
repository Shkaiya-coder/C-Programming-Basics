#include <stdio.h>

int main() {
    FILE *file1, *file2, *output;
    char ch;

    file1 = fopen("data1.txt", "r");
    file2 = fopen("data2.txt", "r");
    output = fopen("merged.txt", "w");

    if (file1 == NULL || file2 == NULL || output == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, output);
    }

    fputc('\n', output);

    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, output);
    }

    fclose(file1);
    fclose(file2);
    fclose(output);

    printf("Files merged successfully.");

    return 0;
}
