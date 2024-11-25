#include <stdio.h>
#include <string.h>

FILE *fptr; // file pointer

int main() {
  fptr = fopen("testdata.in", "r");
  int n, t;
  char m[101][41], p[101][101],
      s[41]; // FRIENDS && TREES, array sizes fixed to constraints

  // jumlah teman dan pohon
  fscanf(fptr, "%d\n", &n); // ambil jumlah records teman dan pohon

  for (int i = 0; i < n; i++) {
    fscanf(fptr, "%[^#]#%[^\n]\n", m[i], p[i]);
    // [^#] disini kita baca sampai tanda #
    // [^\n] disini baca sampai newline
  }

  // jumlah test case
  fscanf(fptr, "%d\n", &t);

  // proses query test cases
  for (int i = 0; i < t; i++) {
    fscanf(fptr, "%s", s);
    int found = 0;

    // cari nama temen di list
    for (int j = 0; j < n; j++) {
      if (strcmp(s, m[j]) == 0) {
        printf("Case #%d: %s\n", i + 1, p[j]);
        found = 1;
        break;
      }
    }

    // kalo nggak ketemu
    if (!found) {
      printf("Case #%d: N/A\n", i + 1);
    }
  }

  fclose(fptr); // jangan lupa tutup file
  return 0;
}
