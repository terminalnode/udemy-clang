#include <stdlib.h>
#include <stdio.h>

int main() {
  printf("Enter a max length: ");
  int max_length;
  scanf("%d", &max_length);

  // Add extra character for \0
  ++max_length;

  printf("Enter a string:\n> ");
  char * pstr = (char *) malloc(max_length * sizeof(char));
  if (pstr != NULL) {
    scanf(" ");
    fgets(pstr, max_length, stdin);
    printf("\nThis is string: %s\n", pstr);
  } else {
    printf("Failed to allocate memory!\n");
  }

  return 0;
}
