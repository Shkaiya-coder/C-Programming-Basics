#include <stdio.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee employee;

    printf("Enter employee name: ");
    scanf("%49[^\n]", employee.name);

    printf("Enter age: ");
    scanf("%d", &employee.age);

    printf("Enter salary: ");
    scanf("%f", &employee.salary);

    printf("\nEmployee Details\n");
    printf("Name = %s\n", employee.name);
    printf("Age = %d\n", employee.age);
    printf("Salary = %.2f", employee.salary);

    return 0;
}
