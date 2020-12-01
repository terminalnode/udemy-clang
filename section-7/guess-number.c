#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER_OF_GUESSES 5

int random_number() {
  time_t t;
  srand((unsigned) time(&t));
  return rand() % 21;
}

int main() {
  int tries_left = NUMBER_OF_GUESSES;
  int last_guess = -1;
  int magic_number = random_number();

  while (tries_left > 0 && last_guess != magic_number) {
    printf("You have %d tries left\n", tries_left);
    printf("Enter a guess: ");
    scanf("%d", &last_guess);

    if (last_guess == magic_number) {
      printf("\nCongratulations! You guessed it!\n");
    } else if (last_guess < magic_number) {
      printf("Sorry, %d is wrong. Magic number is higher than that.\n\n", last_guess);
    } else {
      printf("Sorry, %d is wrong. Magic number is lower than that.\n\n", last_guess);
    }

    tries_left--;
  }

  if (last_guess != magic_number) {
    printf("\nGAME OVER! Number was %d\n", magic_number);
  }

  return 0;
}
