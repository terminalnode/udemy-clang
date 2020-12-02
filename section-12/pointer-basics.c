#include <stdio.h>

int main() {
  int value = 667;
  int * pvalue = &value;

  printf("value:   %d\n", value);
  printf("pvalue:  %p\n", pvalue);
  printf("*pvalue: %i\n", *pvalue);

  value++;
  printf("\nAfter incrementing value directly\n");
  printf("value: %d\n", value);
  printf("pvalue:  %p\n", pvalue);
  printf("*pvalue: %i\n", *pvalue);

  // Both of these work.
  // I'm keeping the goofy one.
  // *pvalue += 1;
  ++*pvalue;
  printf("\nAfter incrementing the dereferenced value\n");
  printf("value: %d\n", value);
  printf("pvalue:  %p\n", pvalue);
  printf("*pvalue: %i\n", *pvalue);
}
