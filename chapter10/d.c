#include <stdio.h>
#include <string.h>

void bubbleSort(char name[][11], int value[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - 1 - i; j++) {
      if (value[j] < value[j + 1] ||
          (value[j] == value[j + 1] && strcmp(name[j], name[j + 1]) > 0)) {
        // Swap values
        int temp = value[j];
        value[j] = value[j + 1];
        value[j + 1] = temp;

        // Swap names
        char tempname[11];
        strcpy(tempname, name[j]);
        strcpy(name[j], name[j + 1]);
        strcpy(name[j + 1], tempname);
      }
    }
  }
}

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);

    char name[n][11];
    int value[n];

    // Read names and scores
    for (int j = 0; j < n; j++) {
      char line[20];
      scanf("%s", line);
      sscanf(line, "%[^#]#%d", name[j], &value[j]); // Split name and value
    }

    // Sort the names and values
    bubbleSort(name, value, n);

    char findStudent[11];
    scanf("%s", findStudent); // Name of the student asking for rank

    // Find the rank of the student
    int rank = 1;
    for (int j = 0; j < n; j++) {
      if (strcmp(name[j], findStudent) == 0) {
        printf("Case #%d: %d\n", i + 1, rank);
        break;
      }
      rank++;
    }
  }

  return 0;
}
