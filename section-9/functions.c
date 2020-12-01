#include <stdio.h>
#include <stdbool.h>

int greatest_common_divisor(int a, int b);
double sqrt(double x2);
double absolute(double x);

int main() {
  printf("GCD of 150 and 35:   %d\n", greatest_common_divisor(150, 35));
  printf("GCD of 1026 and 405: %d\n", greatest_common_divisor(1026, 405));
  printf("ABS of 5:    %f\n", absolute(5));
  printf("ABS of -5:   %f\n", absolute(-5));
  printf("ABS of 1.3:  %f\n", absolute(1.3));
  printf("ABS of -1.3: %f\n", absolute(-1.3));
  printf("Sqrt of 4 is: %f\n", sqrt(4));
  printf("Sqrt of 2 is: %f\n", sqrt(2));
}

int greatest_common_divisor(int a, int b) {
  int smallest = a < b ? a : b;
  int greatest_divisor = 1;

  bool a_divisible = false;
  bool b_divisible = false;
  for (int i = 2; i < smallest; i++) {
    a_divisible = a % i == 0;
    b_divisible = b % i == 0;
    if (a_divisible && b_divisible) {
      greatest_divisor = i;
    }
  }

  return greatest_divisor;
}

double sqrt(double x2) {
  if (x2 != absolute(x2)) {
    return -1.0;
  }

  double x = 1.0;
  const double epsilon = .00001;

  while (absolute(x * x - x2) >= epsilon) {
    x = (x2 / x + x) / 2.0;
  }

  return x;
}

double absolute(double x) {
  return x <= 0 ? -1 * x : x;
}
