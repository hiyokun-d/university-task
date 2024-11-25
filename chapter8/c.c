#include <stdio.h>
FILE *fptr; // file pointer

int main() {
  fptr = fopen("testdata.in", "r");
  int n, t;
  fscanf(fptr, "%d %d", &n, &t);

  printf("%d\n", n + t);
  return 0;
}
