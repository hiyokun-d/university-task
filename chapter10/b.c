#include <stdio.h>
#include <string.h>

FILE *fptr;

int main() {
  fptr = fopen("testdata.in", "r");

  int n;
  fscanf(fptr, "%d\n", &n);

  char NIM[n][21], name[n][21];
  for (int i = 0; i < n; i++) {
    fscanf(fptr, "%s %s\n", NIM[i], name[i]);
  }

  int t;
  fscanf(fptr, "%d\n", &t);

  char find[t][21];
  for (int i = 0; i < t; i++) {
    fscanf(fptr, "%s\n", find[i]);
  }

  for (int i = 0; i < t; i++) {
    int found = 0;
    printf("Case #%d: ", i + 1);
    for (int j = 0; j < n; j++) {
      if (strcmp(find[i], NIM[j]) == 0) {
        printf("%s\n", name[j]);
        found = 1;
      }
    }

    if (found == 0) {
      printf("N/A\n");
    }
  }
  return 0;
}
