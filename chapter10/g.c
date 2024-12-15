#include <stdio.h>

int main() {
  long long n;
  scanf("%lld", &n);

  for (long long i = 0; i < n; i++) {
    long long count = 0;
    long long n, x;
    scanf("%lld %lld", &n, &x);

    long long a[n];

    for (int j = 0; j < n; j++) {
      scanf("%lld", &a[j]);
    }

    for (int j = 0; j < n; j++) {
      if (x <= a[j]) {
        count++;
      }
    }

    printf("Case #%lld: %lld\n", i + 1, count);
  }

  return 0;
}
