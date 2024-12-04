#include <stdio.h>
#include <string.h>

FILE *fptr;
struct Videos {
  char title[1001];
  char artist[1001];
  long long views;
};

int main() {
  struct Videos video[101];
  fptr = fopen("testdata.in", "r");

  int index = 0;
  while (fscanf(fptr, "%[^#]#%[^#]#%lld\n", video[index].title,
                video[index].artist, &video[index].views) == 3) {
    index++;
  }

  for (int i = 0; i < index; i++) {
    for (int j = 0; j < index - i - 1; j++) {
      if (video[j].views < video[j + 1].views) {
        struct Videos temp = video[j];
        video[j] = video[j + 1];
        video[j + 1] = temp;
      }
      // If views are equal, compare by title (ascending order)
      else if (video[j].views == video[j + 1].views) {
        if (strcmp(video[j].title, video[j + 1].title) > 0) {
          struct Videos temp = video[j];
          video[j] = video[j + 1];
          video[j + 1] = temp;
        }
      }
    }
  }

  for (int i = 0; i < index; i++) {
    printf("%s by %s - %lld\n", video[i].title, video[i].artist,
           video[i].views);
  }

  fclose(fptr);
  return 0;
}
