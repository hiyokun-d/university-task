#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int a;
    long long b;
    scanf("%d %lld", &a, &b);

    long long c[a];
    for (int j = 0; j < a; j++) {
      scanf("%lld", &c[j]);
    }

    long long currentSum = 0;
    int left = 0, max_length = 0;

    for (int right = 0; right < a; right++) {
      currentSum += c[right];

      while (currentSum > b && left <= right) {
        currentSum -= c[left];
        left++;
      }

      int currentLength = right - left + 1;
      if (currentSum <= b && currentLength > max_length) {
        max_length = currentLength;
      }
    }

    if (max_length == 0) {
      printf("Case #%d: -1\n", i + 1);
    } else
      printf("Case #%d: %d\n", i + 1, max_length);
  }

  return 0;
}
