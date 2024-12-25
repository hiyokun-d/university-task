
#include <stdio.h>

int binary_search(int arr[], int n, int target) {
  int low = 0, high = n - 1;
  int result = -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
      result = mid; // Record the index
      high =
          mid - 1; // Keep searching towards the left to find the smallest index
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  // Return 1-based index if found, otherwise return -1
  return (result == -1) ? -1 : result + 1;
}

int main() {
  int N, M;

  // Read number of elements in array A and number of queries
  scanf("%d %d", &N, &M);

  int A[N], Q[M];

  // Input array A
  for (int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
  }

  // Input array Q (queries)
  for (int i = 0; i < M; i++) {
    scanf("%d", &Q[i]);
  }

  // Process each query and print the result
  for (int i = 0; i < M; i++) {
    int position = binary_search(A, N, Q[i]);
    printf("%d\n", position);
  }

  return 0;
}
