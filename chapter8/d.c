#include <stdio.h>
#include <string.h>

int main() {
  FILE *fptr = fopen("testdata.in", "r");
  if (fptr == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  int T;
  fscanf(fptr, "%d", &T);

  while (T--) { // Process each test case
    char str[101];
    fscanf(fptr, "%s", str);

    int N;
    fscanf(fptr, "%d", &N);

    // Process transformations
    for (int i = 0; i < N; i++) {
      char from, to;
      fscanf(fptr, " %c %c", &from, &to);
      // Apply this transformation immediately to all matching characters
      for (int j = 0; str[j] != '\0'; j++) {
        if (str[j] == from) {
          str[j] = to;
        }
      }
    }

    // Count frequencies
    int freq[26] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
      freq[str[i] - 'A']++;
    }

    // Print in alphabetical order
    for (int i = 0; i < 26; i++) {
      if (freq[i] > 0) {
        printf("%c %d\n", (char)('A' + i), freq[i]);
      }
    }
  }

  fclose(fptr);
  return 0;
}
