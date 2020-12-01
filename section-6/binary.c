#include <stdio.h>

int main() {
  unsigned int a = 60;            // 0011 1100
  unsigned int b = 13;            // 0000 1101

  printf("a & b: %d\n", a & b);   // 0000 1100 = 4 + 8 = 12
  printf("a | b: %d\n", a | b);   // 0011 1101 = 1 + 4 + 8 + 16 + 32 = 61
  printf("a ^ b: %d\n", a ^ b);   // 0011 0001 = 1 + 16 + 32 = 49
  printf("a << 2: %d\n", a << 2); // 1111 0000 = 16 + 32 + 64 + 128 = 240
  printf("a >> 2: %d\n", a >> 2); // 0000 1111 = 1 + 2 + 4 + 8 = 15
  printf("a >> 4: %d\n", a >> 4); // 0000 0011 = 1 + 2 = 3

  return 0;
}
