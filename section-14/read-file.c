#include <stdio.h>

int main(int argc, char * argv[]) {
  FILE * fp = NULL;

  fp = fopen(argv[1], "r");
  if (fp == NULL) {
    perror("Error opening file");
    return -1;
  }

  /*
  // Read character-by-character
  int c;
  while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
  }
  */

  // Read line-by-line
  char str[128];
  while (fgets(str, 127, fp) != NULL) {
    printf("%s", str);
  }

  fclose(fp);
  fp = NULL;

  return 0;
}
