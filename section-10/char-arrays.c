#include <stdio.h>
#include <stdbool.h>

bool mystrcmp(char str1[], char str2[]);
void mystrcat(char result[], char str1[], char str2[]);
int mystrlen(char str[]);

int main() {
  printf("Length of 'abcdefg': %d\n", mystrlen("abcdefg"));
  printf("Length of '': %d\n", mystrlen(""));
  printf("Length of 'hej hopp': %d\n", mystrlen("hej hopp"));

  char catresult1[50];
  mystrcat(catresult1, "hej", "hopp");
  printf("Concat 'hej', 'hopp': %s\n", catresult1);

  char catresult2[50];
  mystrcat(catresult2, "asdfg", "aoeui");
  printf("Concat 'asdfg', 'aoeui': %s\n", catresult2);

  printf("Compare 'hat', 'hat': %d\n", mystrcmp("hat", "hat"));
  printf("Compare 'hati', 'hat': %d\n", mystrcmp("hati", "hat"));
  printf("Compare 'hat', 'hati': %d\n", mystrcmp("hati", "hat"));
  printf("Compare '', '': %d\n", mystrcmp("", ""));
  printf("Compare ' ', '': %d\n", mystrcmp(" ", ""));
}

bool mystrcmp(char str1[], char str2[]) {
  int i;
  for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
    if (str1[i] != str2[i]) {
      return false;
    }
  }

  return str1[i] == str2[i];
}

void mystrcat(char result[], char str1[], char str2[]) {
  // Add first string
  int i;
  for (i = 0; str1[i] != '\0'; i++) {
    result[i] = (char) str1[i];
  }

  // Add second string
  int j;
  for (j = 0; str2[j] != '\0'; j++) {
    result[i + j] = (char) str2[j];
  }

  // Add terminator
  result[i + j] = '\0';
}

int mystrlen(char str[]) {
  int index;
  for (index = 0; str[index] != '\0'; index++);
  return index;
}
