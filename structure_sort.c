#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[3];
    struct Student temp;

    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Sort by marks in descending order
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (students[i].marks < students[j].marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudents sorted by marks:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name = %s\n", students[i].name);
        printf("Age = %d\n", students[i].age);
        printf("Marks = %.2f\n", students[i].marks);
    }

    return 0;
}
