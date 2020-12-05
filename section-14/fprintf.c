#include <stdio.h>

int main(int argc, char * argv[]) {
  FILE * fp = NULL;
  fp = fopen(argv[1], "w+");

  if (fp == NULL) {
    perror("Error opening file");
    return -1;
  }

  fprintf(
      fp, "%s %s %s %s %s %d\n",
      "Hello!", "You", "are", "a", "tönt!", 666
  );

  fclose(fp);
  return 0;
}
