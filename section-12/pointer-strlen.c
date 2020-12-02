#include <stdio.h>

void mystrlen(const char * ptr);

int main() {
  mystrlen("");
  mystrlen("abc");
  mystrlen("hej hoppsan tjallerallera");

  return 0;
}

void mystrlen(const char * ptr) {
  int length = 0;
  for (; *ptr != '\0'; ptr++, length++);

  printf("String length is: %d\n", length);
}
