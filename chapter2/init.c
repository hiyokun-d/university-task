#include <math.h>
#include <stdio.h>

int isPrimeNumber(int num) {
  if (num < 2)
    return 0;

  for (int i = 2; i < sqrt(num); i++) {
    if (num % i == 0)
      return 0;
  }

  return 1;
}

int main() {
  int limit = 300;

  for (int i = 2; i < limit; i++) {
    if (isPrimeNumber(i)) {
      printf("%d \n", i);
    }
  }

  return 0;
}
