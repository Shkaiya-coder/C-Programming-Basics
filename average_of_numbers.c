#include <stdio.h>

int main() {
    int n, i;
    float num, sum=o, average;

    printf("Enter the number of value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
       printf("Enter number %d= ", i);
       sacnf("%f", &num);

       sum = sum + num;
    }
    average = sum / n
    printf("Average = %.2f", average);
    return 0;
}
