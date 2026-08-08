#include <stdio.h>

int main() {
  int n, sum = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for(int i = 2; i <= n; i += 2) {
     sum = sum + i;
  }

  printf("sum of even numbers = %d", sum);

  return 0; 
}
