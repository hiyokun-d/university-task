#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char s[101];

  printf("Masukin string yang kamu mau convert: ");
  scanf("%100s", s);
  getchar();

  int len = strlen(s);
  printf("KITA ROTATE STRINGNYA: ");
  for (int i = len - 1; i >= 0; i--) {
    printf("%c", s[i]);
  }

  printf("\n");
  printf("KITA CONVERT FORMAT HURUFNYA: ");
  for (int i = len - 1; i >= 0; i--) {
    if (isupper(s[i])) {
      printf("%c", tolower(s[i]));
    } else
      printf("%c", toupper(s[i]));
  }

  printf("\n");
  return 0;
}
