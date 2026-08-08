#include <stdio.h>

int main() {
  int a, b, gcd;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  while (b != 0) {
     int remainder = a % b; 
     a = b;
     b = remainder;
  }

  gcd = a;

  printf("GCD = %d", gcd);

  return 0,
}
