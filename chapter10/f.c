#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int counting = 0;
  for (int i = 0; i < n; i++) {
    int num;
    scanf("%d", &num);

    if (num >= 1) {
      counting++;
    }
  }

  if (counting > 0) {
    puts("not easy");
  } else
    puts("easy");
  return 0;
}
