#include <stdio.h>

int largest(int *a, int *b) {
    if (*a > *b) {
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = largest(&a, &b);

    printf("Largest = %d", result);

    return 0;
}
