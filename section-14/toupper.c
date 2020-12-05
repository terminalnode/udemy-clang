#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "cooltext"
#define TEMP_FILENAME "temptext"

int main() {
  FILE * fp = NULL;
  FILE * temp_fp = NULL;
  char ch;

  fp = fopen(FILENAME, "r");
  if (fp == NULL) {
    return -1;
  }

  temp_fp = fopen(TEMP_FILENAME, "w");
  if (temp_fp == NULL) {
    return -1;
  }

  while ((ch = fgetc(fp)) != EOF) {
    if (islower(ch)) {
      // Upper and lower case characters are offset by 32 in
      // the standard ASCII table. So this converts lower to upper.
      //
      // This will only work with standard ASCII characters though.
      // Not swedish characters etc.
      ch -= 32;
    }
    fputc(ch, temp_fp);
  }
  fclose(fp);
  fclose(temp_fp);
  rename(TEMP_FILENAME, FILENAME);

  return 0;
}
