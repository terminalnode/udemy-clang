#include <stdio.h>

int main(int args, char * argv[]) {
  FILE * fp = NULL;
  fp = fopen(argv[1], "r");
  if (fp == NULL) {
    perror("Error reading file");
    return -1;
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fclose(fp);

  printf("Size of %s = %ld bytes\n", argv[1], size);

  return 0;
}
