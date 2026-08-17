#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[3];
    char searchName[50];
    int found = 0;

    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nEnter student name to search: ");
    scanf(" %49[^\n]", searchName);

    for (int i = 0; i < 3; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("\nStudent Found!\n");
            printf("Name = %s\n", students[i].name);
            printf("Age = %d\n", students[i].age);
            printf("Marks = %.2f\n", students[i].marks);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student Not Found");
    }

    return 0;
}
