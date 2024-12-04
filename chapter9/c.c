#include <stdio.h>
#include <string.h>

FILE *fptr;
struct Students {
  char nim[11];
  char name[21];
};

int main(int argc, char *argv[]) {
  struct Students student[1001];
  int n;
  fptr = fopen("testdata.in", "r");
  fscanf(fptr, "%d\n", &n);

  for (int i = 0; i < n; i++) {
    fscanf(fptr, "%s %[^\n]\n", student[i].nim, student[i].name);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (strcmp(student[j].nim, student[j + 1].nim) > 0) {
        struct Students temp = student[j];
        student[j] = student[j + 1];
        student[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%s %s\n", student[i].nim, student[i].name);
  }

  fclose(fptr);
  return 0;
}
