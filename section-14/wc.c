#include <stdio.h>

void count_lines(FILE * fp, char filename[]);

int main(int argc, char * argv[]) {
  FILE * fp = NULL;

  if (argc < 1) {
    perror("You need to specify a file");
    return -1;
  }

  // Skip first argument of argv (the filename)
  argv++;

  while (*argv != NULL) {
    printf("%s: ", *argv);
    count_lines(fp, *argv);
    printf("\n");
    argv++;
  }

  return 0;
}

void count_lines(FILE * fp, char filename[]) {
  fp = NULL;
  fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("File does not exist");
    return;
  }

  char c;
  int line_count = 0;
  while ((c = fgetc(fp)) != EOF) {
    if (c == '\n') {
      line_count++;
    }
  }
  fclose(fp);

  printf("%d", line_count);
}
