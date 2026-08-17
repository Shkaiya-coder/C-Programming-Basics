#include <stdio.h>

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    char name[50];
    int age;
    struct Address address;
};

int main() {
    struct Student student;

    printf("Enter student name: ");
    scanf(" %49[^\n]", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter city: ");
    scanf(" %49[^\n]", student.address.city);

    printf("Enter pincode: ");
    scanf("%d", &student.address.pincode);

    printf("\nStudent Details\n");
    printf("Name = %s\n", student.name);
    printf("Age = %d\n", student.age);
    printf("City = %s\n", student.address.city);
    printf("Pincode = %d", student.address.pincode);

    return 0;
}
