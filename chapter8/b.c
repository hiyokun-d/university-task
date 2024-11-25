#include <ctype.h>
#include <stdio.h>
#include <string.h>

FILE *fptr;
int main() {
  fptr = fopen("testdata.in", "r");
  char s[1001];

  int t;
  fscanf(fptr, "%d", &t);

  int k;
  for (int i = 0; i < t; i++) {
    fscanf(fptr, "%d\n", &k);
    fgets(s, 1001, fptr);

    s[strcspn(s, "\n")] = '\0'; // ngilangin enternya bre

    for (int j = 0; s[j] != '\0'; j++) {
      if (isdigit(s[j])) {
        // Substitute numbers with corresponding letters
        switch (s[j]) {
        case '0':
          s[j] = 'O'; // 0 → O
          break;
        case '1':
          s[j] = 'I'; // 1 → I
          break;
        case '3':
          s[j] = 'E'; // 3 → E
          break;
        case '4':
          s[j] = 'A'; // 4 → A
          break;
        case '5':
          s[j] = 'S'; // 5 → S
          break;
        case '6':
          s[j] = 'G'; // 6 → G
          break;
        case '7':
          s[j] = 'T'; // 7 → T
          break;
        case '8':
          s[j] = 'B'; // 8 → B
          break;
        }
      }

      if (isupper(s[j])) {
        s[j] = ((s[j] - 'A' - k + 26) % 26) + 'A';
      } else if (islower(s[j])) {
        s[j] = ((s[j] - 'a' - k + 26) % 26) + 'a';
      }
    }

    printf("Case #%d: %s\n", i + 1, s);
  }

  fclose(fptr);
  return 0;
}
