#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student student;
    struct Student *ptr;

    printf("Enter student name: ");
    scanf(" %49[^\n]", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    ptr = &student;

    printf("\nStudent Details\n");
    printf("Name = %s\n", ptr->name);
    printf("Age = %d\n", ptr->age);
    printf("Marks = %.2f", ptr->marks);

    return 0;
}
