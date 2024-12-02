#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *f = fopen("testdata.in", "r");
  int T;
  fscanf(f, "%d\n", &T);

  for (int i = 0; i < T; i++) {
    int N;
    int sideSum = 0;
    int areaSum = 0;
    int blockSum = 0;
    fscanf(f, "%d\n", &N);
    int height[N];
    height[0] = 0;
    for (int j = 1; j <= N; j++) {
      fscanf(f, "%d", &height[j]);
      blockSum = blockSum + height[j];
      sideSum = sideSum + height[j] * 4 + 4;
      if (height[j] >= height[j - 1]) {
        sideSum = sideSum - height[j - 1] * 4;
      } else {
        sideSum = sideSum - height[j] * 4;
      }
    }
    fscanf(f, "\n");

    areaSum = blockSum * 4;
    printf("Case #%d: %d %d\n", i + 1, sideSum, areaSum);
  }

  fclose(f);

  return 0;
}
