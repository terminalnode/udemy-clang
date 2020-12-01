#include <stdio.h>

int main() {
  int minutes;
  printf("Enter a number of whole minutes: ");
  scanf("%d", &minutes);

  double days = minutes / 1440.0;
  double years = days / 365.0;

  printf("%d minutes is %f years or %f days", minutes, years, days);

  return 0;
}
