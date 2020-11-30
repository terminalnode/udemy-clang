#include <stdio.h>
#include <stdbool.h>

int main() {
  float x = 6.66;
  double y = 6.6666666666666666666666666666666666;
  bool z = true;
  printf("Float: %f\n", x);
  printf("Double: %f\n", y);
  printf("Boolean: %s\n", x ? "true" : "false");
}
