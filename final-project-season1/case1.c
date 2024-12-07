// this code is write by hiyo - Daffa
// https://github.com/hiyokun-d
// https://hiyo-dev.vercel.app
// My Discord server: https://discord.gg/9aP6WM5F (hiyo-d)

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char s[101];

  // read a string input from the user, we limit the character to just 100
  // characters to avoid overflow
  printf("Masukin string yang kamu mau convert: ");
  scanf("%100s", s);
  getchar(); // make sure to consume the newline character left in the buffer
             // after scanf

  // get the string length
  int len = strlen(s);

  printf("KITA ROTATE STRINGNYA: ");
  // loop to print the string in reverse order
  for (int i = len - 1; i >= 0; i--) {
    printf("%c", s[i]);
  }

  //-------------------------------------
  // this code is write by hiyo - Daffa
  // https://github.com/hiyokun-d
  // https://hiyo-dev.vercel.app
  // My Discord server: https://discord.gg/9aP6WM5F (hiyo-d)
  //--------------------------------------------------------

  printf("\n");
  printf("KITA CONVERT FORMAT HURUFNYA: ");
  // loop string in reverse order and we also convert it into the letter case
  for (int i = len - 1; i >= 0; i--) {
    // check if the character is upper case
    if (isupper(s[i])) {
      // if yes we'll gonna convert it into lower case
      printf("%c", tolower(s[i]));

      // if not then we'll gonna convert it to upper case
    } else
      printf("%c", toupper(s[i]));
  }

  printf("\n");
  return 0;
}

// this code is write by hiyo - Daffa
// https://github.com/hiyokun-d
// https://hiyo-dev.vercel.app
// My Discord server: https://discord.gg/9aP6WM5F (hiyo-d)
