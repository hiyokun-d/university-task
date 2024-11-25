#include <stdio.h>

int main() {
  freopen("testdata.in", "r", stdin);

  int T;
  scanf("%d", &T);

  for (int i = 1; i <= T; i++) {
    int N;
    scanf("%d", &N);

    int maxHeight = 0;
    int totalWidth = N * 2 + 2; // Corrected width calculation (N*2 + 2)
    int area = 0;

    for (int j = 0; j < N; j++) {
      int cubes;
      scanf("%d", &cubes);
      int height = cubes * 2; // Height of stack
      if (height > maxHeight) {
        maxHeight = height; // Track the maximum height
      }
      area += height * 2; // Area of each stack (height * width)
    }

    int perimeter =
        2 * totalWidth + 2 * maxHeight; // Corrected perimeter formula
    printf("Case #%d: %d %d\n", i, perimeter, area); // Output result
  }

  return 0;
}
