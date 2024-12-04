#include <stdio.h>
#include <string.h>

#define MAX_PLANTS 1000

struct Plant {
  char name[41];
  int num;
};

void swap(struct Plant *a, struct Plant *b) {
  struct Plant temp = *a;
  *a = *b;
  *b = temp;
}

int partition(struct Plant arr[], int low, int high) {
  struct Plant pivot = arr[high];
  int i = (low - 1);
  for (int j = low; j <= high - 1; j++) {
    if (strcasecmp(arr[j].name, pivot.name) < 0) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quickSort(struct Plant arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main() {
  int n;
  FILE *fptr = fopen("testdata.in", "r");
  if (!fptr) {
    printf("Error opening file!\n");
    return 1;
  }

  fscanf(fptr, "%d\n", &n);
  struct Plant plants[MAX_PLANTS];

  for (int i = 0; i < n; i++) {
    fscanf(fptr, "%d#%[^\n]\n", &plants[i].num, plants[i].name);
  }
  fclose(fptr);

  quickSort(plants, 0, n - 1);

  for (int i = 0; i < n; i++) {
    printf("%d %s\n", plants[i].num, plants[i].name);
  }

  return 0;
}
