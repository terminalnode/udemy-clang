#include <stdio.h>
#include <stdlib.h>

#define FILENAME "cooltext"

int main() {
  FILE * fp = NULL;
  char ch;

  fp = fopen(FILENAME, "r");
  if (fp == NULL) {
    return -1;
  }

  fseek(fp, 0, SEEK_END);
  int length = ftell(fp);
  printf("File length: %d\n", length);

  int i = 0;
  while (i < length) {
    i++;
    fseek(fp, -i, SEEK_END);
    ch = fgetc(fp);
    printf("%c", ch);
  }

  printf("\n");
  fclose(fp);
  fp = NULL;
  return 0;
}
