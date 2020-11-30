#include <stdio.h>

int main() {
  char str[100];
  int i;

  printf("Enter a value and a string: ");
  scanf("%d %s", &i, str);
  printf("\nYou entered: %d and %s\n", i, str);

  return 0;
}
