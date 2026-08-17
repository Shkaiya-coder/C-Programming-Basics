#include <stdio.h>

struct Student {
    char name[50];
    int marks1;
    int marks2;
    int marks3;
    int total;
    float average;
};

int main() {
    struct Student student;

    printf("Enter student name: ");
    scanf("%49[^\n]", student.name);

    printf("Enter marks for 3 subjects: ");
    scanf("%d %d %d", &student.marks1, &student.marks2, &student.marks3);

    student.total = student.marks1 + student.marks2 + student.marks3;
    student.average = student.total / 3.0;

    printf("\nStudent Details\n");
    printf("Name = %s\n", student.name);
    printf("Total = %d\n", student.total);
    printf("Average = %.2f", student.average);

    return 0;
}
