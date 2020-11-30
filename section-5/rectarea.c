#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double height = atoi(argv[1]);
  double width = atoi(argv[2]);
  double perimeter = 2.0 * (height + width);
  double area = width * height;

  printf("Perimeter is: %f\n", perimeter);
  printf("Area is: %f\n", area);

  return 0;
}
