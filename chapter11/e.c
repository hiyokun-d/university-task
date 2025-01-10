#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  long long a[n], prefix[n + 1];
  prefix[0] = 0;

  for (int i = 0; i < n; i++) {
    scanf("%lld", &a[i]);
    prefix[i + 1] = prefix[i] + a[i];
  }

  int q;
  scanf("%d", &q);

  for (int i = 0; i < q; i++) {
    long long m;
    scanf("%lld", &m);
    int maxLen = -1;
    int right = 0;

    for (int left = 0; left < n; left++) {
      while (right < n && prefix[right + 1] - prefix[left] <= m) {
        right++;
      }

      if (prefix[right] - prefix[left] <= m) {
        int currentLen = right - left;
        if (currentLen > maxLen)
          maxLen = currentLen;
      }
    }

    printf("Case #%d: %d\n", i + 1, maxLen);
  }

  return 0;
}
