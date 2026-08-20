#include <stdio.h>

int main() {
    FILE *file, *temp;
    char line[200];
    char new_line[200];
    int line_number, current_line = 1;

    file = fopen("data.txt", "r");
    temp = fopen("temp.txt", "w");

    if (file == NULL || temp == NULL) {
        printf("File error.");
        return 1;
    }

    printf("Enter line number to insert: ");
    scanf("%d", &line_number);

    getchar();

    printf("Enter new line: ");
    fgets(new_line, sizeof(new_line), stdin);

    while (fgets(line, sizeof(line), file) != NULL) {

        if (current_line == line_number) {
            fputs(new_line, temp);
        }

        fputs(line, temp);
        current_line++;
    }

    if (line_number >= current_line) {
        fputs(new_line, temp);
    }

    fclose(file);
    fclose(temp);

    remove("data.txt");
    rename("temp.txt", "data.txt");

    printf("Line inserted successfully.");

    return 0;
}
