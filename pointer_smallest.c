#include <stdio.h>

int smallest(int *a, int *b) {
    if (*a < *b) {
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = smallest(&a, &b);

    printf("Smallest = %d", result);

    return 0;
}
