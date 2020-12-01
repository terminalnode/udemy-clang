#include <stdio.h>

#define PAYRATE 12.00
#define OVERTIME_RATE 18.00
#define OVERTIME_THRESHOLD 40.00

#define TAXRATE_TIER1 0.15
#define TAXRATE_TIER2 0.20
#define TAXRATE_TIER3 0.25
#define TAX_TIER1 300
#define TAX_TIER2 150

int main() {
  printf("Welcome to pay calculator 2000!\n");

  double hours_worked;
  printf("How many hours did you work this week?\n> ");
  scanf("%lf", &hours_worked);

  double before_tax;
  if (hours_worked <= OVERTIME_THRESHOLD) {
    before_tax = hours_worked * PAYRATE;
  } else {
    before_tax = OVERTIME_THRESHOLD * PAYRATE;
    before_tax += (hours_worked - OVERTIME_THRESHOLD) * OVERTIME_RATE;
  }

  double tax;
  if (before_tax <= TAX_TIER1) {
    tax = before_tax * TAXRATE_TIER1;

  } else if (before_tax <= TAX_TIER1 + TAX_TIER2) {
    tax = TAX_TIER1 * TAXRATE_TIER1;
    tax += (before_tax - TAX_TIER1) * TAXRATE_TIER2;

  } else {
    tax = TAX_TIER1 * TAXRATE_TIER1;
    tax += TAX_TIER2 * TAXRATE_TIER2;
    tax += (before_tax - TAX_TIER1 - TAX_TIER2) * TAXRATE_TIER3;
  }

  printf("\nTotal pay:           $%.2lf\n", before_tax);
  printf("Tax:                 $%.2lf\n", tax);
  printf("Total pay after tax: $%.2lf\n", before_tax - tax);

  return 0;
}
