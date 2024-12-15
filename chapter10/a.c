#include <stdio.h>
#include <string.h>

typedef struct {
  char shortWord[51];
  char originalWord[51];
} DictionaryEntry;

void translate(char *sentence, DictionaryEntry *dictionary, int T) {
  char *token = strtok(sentence, " ");
  while (token != NULL) {
    int translated = 0;
    for (int i = 0; i < T; i++) {
      if (strcmp(token, dictionary[i].shortWord) == 0) {
        printf("%s", dictionary[i].originalWord);
        translated = 1;
        break;
      }
    }
    if (!translated) {
      printf("%s", token);
    }
    token = strtok(NULL, " ");
    if (token != NULL) {
      printf(" ");
    }
  }
}

int main() {
  FILE *file = fopen("testdata.in", "r");
  if (file == NULL) {
    fprintf(stderr, "Error opening file\n");
    return 1;
  }

  int T;
  fscanf(file, "%d\n", &T);
  DictionaryEntry dictionary[T];

  for (int i = 0; i < T; i++) {
    fscanf(file, "%50[^#]#%50[^\n]\n", dictionary[i].shortWord,
           dictionary[i].originalWord);
  }

  int TC;
  fscanf(file, "%d\n", &TC);
  char sentence[101];

  for (int i = 0; i < TC; i++) {
    printf("Case #%d:\n", i + 1);
    fgets(sentence, sizeof(sentence), file);
    sentence[strcspn(sentence, "\n")] = 0;
    translate(sentence, dictionary, T);
    printf("\n");
  }

  fclose(file);
  return 0;
}
