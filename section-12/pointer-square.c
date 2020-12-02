#include <stdio.h>

void mysquare(int * const x);

int main() {
  int num1 = 3;
  mysquare(&num1);
  int num2 = 4;
  mysquare(&num2);
  printf("Square of num1: %d\n", num1);
  printf("Square of num1: %d\n", num2);
  return 0;
}

void mysquare(int * const x) {
  *x = (*x) * (*x);
}
