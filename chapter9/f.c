#include <stdio.h>
#include <string.h>

struct Matkul {
  char title[10];
  int deadline;
};

// Modified merge function that handles sorting by deadline and
// lexicographically by title if deadlines are the same
void merge(struct Matkul arr[], int left, int mid, int right) {
  int i, j, k;
  int n1 = mid - left + 1;
  int n2 = right - mid;

  struct Matkul leftArr[n1], rightArr[n2];

  for (i = 0; i < n1; i++)
    leftArr[i] = arr[left + i];
  for (j = 0; j < n2; j++)
    rightArr[j] = arr[mid + 1 + j];

  i = 0;
  j = 0;
  k = left;
  while (i < n1 && j < n2) {
    // First compare by deadline
    if (leftArr[i].deadline < rightArr[j].deadline) {
      arr[k] = leftArr[i];
      i++;
    }
    // If deadlines are equal, compare lexicographically by title
    else if (leftArr[i].deadline == rightArr[j].deadline) {
      if (strcmp(leftArr[i].title, rightArr[j].title) <= 0) {
        arr[k] = leftArr[i];
        i++;
      } else {
        arr[k] = rightArr[j];
        j++;
      }
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

// Merge sort function
void mergeSort(struct Matkul arr[], int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
  }
}

int main() {
  int n;
  scanf("%d", &n);

  struct Matkul matkul[n];

  // Input assignments
  for (int i = 0; i < n; i++) {
    scanf("%s %d", matkul[i].title, &matkul[i].deadline);
  }

  // Sort assignments using merge sort
  mergeSort(matkul, 0, n - 1);

  // Output sorted assignments
  for (int i = 0; i < n; i++) {
    printf("%s\n", matkul[i].title);
  }

  return 0;
}
