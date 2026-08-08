#include <stdio.h>

int main() {
  int n, sum = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i +=2) {
     sum = sum + 1;
  }

  printf("sum of odd numbers = %d", sum);

  return 0;
}
