#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high]; // pivot
  int i = (low - 1);     // Index of smaller element

  for (int j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

// Quicksort function
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);

    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Sort the array using quicksort
  quickSort(arr, 0, n - 1);

  // Find the maximum difference
  int max_diff = 0;
  for (int i = 0; i < n - 1; i++) {
    int diff = arr[i + 1] - arr[i];
    if (diff > max_diff) {
      max_diff = diff;
    }
  }

  // Print the pairs with maximum difference
  int first_pair = 1;
  for (int i = 0; i < n - 1; i++) {
    int diff = arr[i + 1] - arr[i];
    if (diff == max_diff) {
      if (!first_pair) {
        printf(" ");
      }
      printf("%d %d", arr[i], arr[i + 1]);
      first_pair = 0;
    }
  }

  printf("\n");
  return 0;
}
