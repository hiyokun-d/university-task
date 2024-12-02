#include <stdio.h>
#include <string.h>

FILE *fptr;

int main() {
  fptr = fopen("testdata.in", "r");
  if (fptr == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  int t;
  fscanf(fptr, "%d", &t);

  for (int i = 0; i < t; i++) {
    char str[110];
    fscanf(fptr, " %[^\n]", str);
    int len = strlen(str);
    int counter[26] = {0};   // To count each character occurrence
    char alphabet[26] = {0}; // To track which characters have been replaced

    int n;
    fscanf(fptr, "%d", &n);
    int checking[26] = {0}; // To prevent multiple replacements for same char

    for (int j = 0; j < n; j++) {
      char a, b;
      fscanf(fptr, " %c %c", &a, &b);

      if (checking[a - 'A'] == 0) {
        for (int k = 0; k < len; k++) {
          if (str[k] == a) {
            str[k] = b; // Replace character in string
          }
        }
        checking[a - 'A'] = 1; // Mark character as replaced
      }
    }

    // Count the occurrences of each character in the modified string
    for (int j = 0; j < len; j++) {
      if (str[j] >= 'A' && str[j] <= 'Z') {
        counter[str[j] - 'A']++;
      }
    }

    // Print characters in alphabetical order with their counts
    for (int j = 0; j < 26; j++) {
      if (counter[j] > 0) {
        printf("%c %d\n", 'A' + j, counter[j]);
      }
    }
  }

  fclose(fptr);
  return 0;
}
