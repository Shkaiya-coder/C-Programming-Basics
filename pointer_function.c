#include <stdio.h>

void changeValue(int *x) {
    *x = 100;
}

int main() {
    int number = 10;

    printf("Before function: %d\n", number);

    changeValue(&number);

    printf("After function: %d", number);

    return 0;
}
