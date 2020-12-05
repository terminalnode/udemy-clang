#include <stdio.h>

int main(int argc, char * argv[]) {
  FILE * fp = NULL;
  fp = fopen(argv[1], "w+");

  if (fp == NULL) {
    perror("Error opening file");
    return -1;
  }

  fputs(
      "This file has been written to\n"
      "By the evil file writer, muhaha",
      fp
  );

  fclose(fp);
  return 0;
}
