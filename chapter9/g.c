#include <stdio.h>

int bubbleSortAndCountSwaps(int arr[], int n) {
  int swapCount = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapCount++;
      }
    }
  }
  return swapCount;
}

int main() {
  int T;
  scanf("%d", &T);
  for (int t = 1; t <= T; t++) {
    int N, X;
    scanf("%d %d", &N, &X);
    int carriages[N];
    for (int i = 0; i < N; i++) {
      scanf("%d", &carriages[i]);
    }
    int swapCount = bubbleSortAndCountSwaps(carriages, N);
    int totalTime = swapCount * X;
    printf("Case #%d: %d\n", t, totalTime);
  }

  return 0;
}
