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

  // for (int i = 0; i < q; i++) {
  //   long long m;
  //   scanf("%lld", &m);
  //
  //   int bestIndex = -1;
  //   long long closestSum = -1;
  //
  //   for (int j = 1; j <= n; j++) {
  //     if (prefix[j] <= m && prefix[j] > closestSum) {
  //       closestSum = prefix[j];
  //       bestIndex = j;
  //     }
  //   }
  //
  //   printf("Case #%d: %d\n", i + 1, bestIndex);
  // }

  for (int i = 0; i < q; i++) {
    long long m;
    scanf("%lld", &m);

    int left = 1, right = n, bestIndex = -1;

    // BINARY SEARCH (i'm just to lazy to make the whole function to make this
    // okay F*CK IT CRY ABOUT IT CAUSE I MAKE THIS INSIDE OF MAIN function)
    while (left <= right) {
      int mid = (left + right) / 2;
      if (prefix[mid] <= m) {
        bestIndex = mid;
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }
    printf("Case #%d: %d\n", i + 1, bestIndex);
  }

  return 0;
}
