#include <stdio.h>

int main(int argc, char *argv[]) {
  char *program_name = argv[0];
  char *argument1 = argv[1];
  char *argument2 = argv[2];
  printf("Number of arguments: %d\n", argc);
  printf("Program name: %s\n", program_name);
  printf("Argument 1: %s\n", argument1);
  printf("Argument 2: %s\n", argument2);
}
