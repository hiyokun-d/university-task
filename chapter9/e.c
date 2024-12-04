#include <stdio.h>
#include <string.h>

FILE *fptr;
struct City {
  char name[1001];
  float temperature;
  char matrics;
  float inCelc;
};

float convertToCelcius(float tempF) { return (tempF - 32) * 5 / 9; }

int main() {
  struct City city[101];
  fptr = fopen("testdata.in", "r");

  int index = 0;
  while (fscanf(fptr, "%[^#]#%f#%c\n", city[index].name,
                &city[index].temperature, &city[index].matrics) == 3) {
    if (city[index].matrics == 'F') {
      city[index].inCelc = convertToCelcius(city[index].temperature);
    } else
      city[index].inCelc = city[index].temperature;

    index++;
  }

  for (int i = 0; i < index; i++) {
    for (int j = 0; j < index - i - 1; j++) {
      if (city[j].inCelc > city[j + 1].inCelc) {
        struct City temp = city[j];
        city[j] = city[j + 1];
        city[j + 1] = temp;
      } else if (city[j].inCelc == city[j + 1].inCelc) {
        if (strcmp(city[j].name, city[j + 1].name) > 0) {
          struct City temp = city[j];
          city[j] = city[j + 1];
          city[j + 1] = temp;
        }
      }
    }
  }

  for (int i = 0; i < index; i++) {
    printf("%s is %.2f%c\n", city[i].name, city[i].temperature,
           city[i].matrics);
  }

  fclose(fptr);
  return 0;
}
