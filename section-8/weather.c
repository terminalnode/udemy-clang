#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main() {
  float rain[YEARS][MONTHS] = {
    { 5.4, 5.3, 5.3, 5.3, 5.9, 4.8, 4.8, 4.5, 4.6, 4.4, 3.4, 4.6 },
    { 4.1, 7.1, 3.0, 3.2, 2.9, 5.7, 2.6, 2.5, 2.4, 2.5, 2.5, 8.6 },
    { 2.4, 6.2, 5.1, 4.0, 3.1, 4.8, 3.7, 3.6, 4.1, 6.6, 5.2, 6.6 },
    { 3.2, 3.3, 2.1, 3.0, 2.9, 3.11, 3.7, 1.6, 3.7, 13.6, 4.2, 7.4 },
    { 4.3, 4.2, 4.1, 4.0, 3.9, 2.9, 3.7, 3.9, 3.7, 4.10, 5.8, 6.1 }
  };
  int a = 0x00000a;

  float total = 0;
  float sub_total;
  printf("YEAR\t\tRAINFALL (inches)\n");

  for (int year = 0; year < YEARS; year++) {
    for (int month = 0; month < MONTHS; month++) {
      sub_total += rain[year][month];
    }

    printf("%d\t\t%.2f\n", year, sub_total);
    sub_total = 0;
  }

  return 0;
}
