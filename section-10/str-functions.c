#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_reverse();
void sort_string();

// strcmp strcpy
int main() {
  print_reverse();
  sort_string();
}

void sort_string() {
  char str[100];

  printf("Enter a string to sort\nUnsorted: ");
  scanf("%s", str);

  bool sorted;
  char current, previous;
  int length = strlen(str);
  do {
    sorted = true;
    previous = str[0];
    for (int i = 1; i < length; i++) {
      current = str[i];
      if (previous > current) {
        sorted = false;
        str[i - 1] = current;
        str[i] = previous;
      }
    }

  } while (!sorted);

  printf("Sorted: %s", str);
}

void print_reverse() {
  char str[100];

  printf("Enter a string to reverse\nForwards: ");
  scanf("%s", str);
  printf("Reverse: ");

  int length = strlen(str);
  for (int i = length - 1; i >= 0; i--) {
    printf("%c", str[i]);
  }
  printf("\n");
}
