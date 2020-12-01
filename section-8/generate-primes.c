#include <stdio.h>
#include <stdbool.h>

int main() {
  int primes[25] = { 2, 3 };
  int number_of_primes = 2;

  for (int i = 4; i <= 100; i += 2) {
    bool is_prime = true;

    for (int prime_index = 3; prime_index < number_of_primes; prime_index++) {
      if (i % primes[prime_index] == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime) {
      primes[number_of_primes] = i;
      number_of_primes++;
    }
  }

  printf("Prime numbers between 1 and 100:\n");
  for (int i = 0; i < number_of_primes; i++) {
    printf("%d ", primes[i]);
  }
  printf("\n");

  return 0;
}
