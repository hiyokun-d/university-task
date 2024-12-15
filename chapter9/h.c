#include <stdio.h>
#include <string.h>

#define MAX_SIZE 201

void sortRow(char *row, int len) {
  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - i - 1; j++) {
      if (row[j] > row[j + 1]) {
        char temp = row[j];
        row[j] = row[j + 1];
        row[j + 1] = temp;
      }
    }
  }
}

void sortRows(char grid[MAX_SIZE][MAX_SIZE], int r) {
  for (int i = 0; i < r - 1; i++) {
    for (int j = 0; j < r - i - 1; j++) {
      if (strcmp(grid[j], grid[j + 1]) < 0) {
        char temp[MAX_SIZE];
        strcpy(temp, grid[j]);
        strcpy(grid[j], grid[j + 1]);
        strcpy(grid[j + 1], temp);
      }
    }
  }
}

int main() {
  int r, c;
  char grid[MAX_SIZE][MAX_SIZE];

  scanf("%d %d", &r, &c);

  for (int i = 0; i < r; i++) {
    scanf("%s", grid[i]);
  }

  for (int i = 0; i < r; i++) {
    sortRow(grid[i], c);
  }

  sortRows(grid, r);

  for (int i = 0; i < r; i++) {
    printf("%s\n", grid[i]);
  }

  return 0;
}
