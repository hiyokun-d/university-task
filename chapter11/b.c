#include <stdio.h>

long long sumSquare(long long n) { return n * (n + 1) * (2 * n + 1) / 6; }

long long findSmallest(long long m) {
  long long left = 1,
            right =
                2000000; // don't ask why it's there cause i don't have any idea
  while (left < right) {
    long long mid = left + (right - left) / 2;
    if (sumSquare(mid) >= m)
      right = mid;
    else
      left = mid + 1;
  }

  return left;
}

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    long long m;
    scanf("%lld", &m);
    long long result = findSmallest(m);
    printf("Case #%d: %lld\n", i + 1, result);
  }

  return 0;
}
