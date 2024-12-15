#include <stdio.h>

int main() {
  int n, t;
  scanf("%d %d", &n, &t);
  int x[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }

  int r;
  for (int i = 0; i < t; i++) {
    scanf("%d", &r);

    for (int j = 0; j < n; j++) {
      if (r == x[j]) {
        x[j] = -1;
      }
    }
  }

  int highest = -1;

  for (int i = 0; i < n; i++) {
    if (x[i] > highest) {
      highest = x[i];
    }
  }

  printf("Maximum number is %d\n", highest);
  return 0;
}
