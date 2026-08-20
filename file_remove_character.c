#include <stdio.h>

int main() {
    FILE *file, *temp;
    char ch, remove_ch;

    file = fopen("data.txt", "r");
    temp = fopen("temp.txt", "w");

    if (file == NULL || temp == NULL) {
        printf("File error.");
        return 1;
    }

    printf("Enter character to remove: ");
    scanf(" %c", &remove_ch);

    while ((ch = fgetc(file)) != EOF) {
        if (ch != remove_ch) {
            fputc(ch, temp);
        }
    }

    fclose(file);
    fclose(temp);

    remove("data.txt");
    rename("temp.txt", "data.txt");

    printf("Character removed successfully.");

    return 0;
}
