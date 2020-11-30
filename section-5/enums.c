#include <stdio.h>

enum month {
  January, February, March, April, May, June,
  July, August, September, October, November, December
};

int main() {
  // Both of these are equally valid
  enum month m1 = January;
  enum month m2 = 0;

  // This is actually valid, so like, be careful.
  enum month m3 = 120;

  // Actual value of the month enum is an int, these will print 0
  printf("%u\n", m1);
  printf("%u\n", m2);
  printf("%u\n", m3);

  // These are both 0, so January will be printed.
  printf("%s\n", m1 == 0 ? "January" : "Not January");
  printf("%s\n", m2 == 0 ? "January" : "Not January");

  // We can do addition even!
  printf("%u\n", m1 + 9);
  printf("%u\n", m2 + 9);

  m1 += 1;
  printf("%s\n", m1 == 1 ? "February" : "Not February");
  return 0;
}

