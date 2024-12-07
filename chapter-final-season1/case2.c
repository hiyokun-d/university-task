#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fptr;

/*
 * OBJECTIVE:
 * DISPLAY, DONE!!!!
 * MAKE SEARCH FUNCTION (2), DONE!!!
 * MAKE SORT FUNCTION (3 AND 2), DONE!!!
 * EXPORTING FUNCTION (4)
 * */

int total_places = 0;
char line[256];

struct Places {
  char location[50], city[50], furnish[50], type[50];
  int price, rooms, bathroom, carpark;
} place[3940];

// this function just display the menu to make my code less mess and you can
// still read it while i can't :v why am i using puts instead of printf you ask?
// it's because i keep FORGETTING \n AND GUESS WHAT I'M ASKING GPT TO SUGGEST ME
// ANY SOLUTION AND IT GAVE ME THIS PUTS, NICE!
void displayMenu() {
  puts("Hey brader what you gonna do today?.");
  puts("1. Display Data");
  puts("2. Search Data");
  puts("3. Sort Data");
  puts("4. Export Data");
  puts("5. Exit");
}

// this function wait for the user to press the "enter" (make a newline). it
// gives the user time to read the information before they continuing. Once the
// user presses "enter", the function allows the to proceed with their next
// action or another input they want, yeah i made it cause is it looks cool :v
void waitEnter(char *string) {
  printf("%s", string);
  while (getchar() != '\n')
    ;
  getchar();
}

// it's just simply displaying data that we got from the files and we store at
// Places
void displayData(int rows_to_display) {
  // we'll check if data is greater than the total places (data) we have if it
  // does then we'll simply tell the user and change the value into total places
  // so it makes more make sense
  if (rows_to_display > total_places) {
    printf("You requested more rows than available. Displaying all %d rows.\n",
           total_places);
    rows_to_display = total_places;
  }

  // i just know if we have this "-(number)" then it'll make a tab so i'm using
  // it :v
  printf("%-20s%-20s%-15s%-10s%-12s%-12s%-14s%-15s\n", "Location", "City",
         "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");

  // it's just gonna loop entire array to display and it'll display based on how
  // much user want to display
  for (int i = 0; i < rows_to_display; i++) {
    printf("%-20s%-20s%-15d%-10d%-12d%-12d%-14s%-15s\n", place[i].location,
           place[i].city, place[i].price, place[i].rooms, place[i].bathroom,
           place[i].carpark, place[i].type, place[i].furnish);
  }

  // and this how we'll use the function in every code
  waitEnter("Silahkan untuk menekan enter sekali lagi untuk lanjut");
}

// read the entire file and store it in place memory or whatever is it we just
// gonna store it in place array or structure so we can use it like sort it and
// search it
void readFile() {
  // Open the file in read mode
  fptr = fopen("file(in).csv", "r");

  // make sure if the file is EXIST and not deleted by user
  if (fptr == NULL) {
    printf("Filenya gak nemu, jangan dihapus dong filenya atau pastiin nih "
           "file ada di komputer lu file(in).csv");
  }

  // read each line from the file until the end is reached like really at the
  // bottom of the file
  while (fgets(line, sizeof(line), fptr)) {
    // Parse the line using sscanf to extract each field spearated by commas and
    // store it in the structure that we make
    // %[^,] it'll read a string until the next comma "," and "%d" it's just
    // read integer
    sscanf(line, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%s",
           place[total_places].location, place[total_places].city,
           &place[total_places].price, &place[total_places].rooms,
           &place[total_places].bathroom, &place[total_places].carpark,
           place[total_places].type, place[total_places].furnish);
    total_places++;
  }

  // after we use it make sure we close it
  fclose(fptr);
}

// like it name it's just convert the string into lower case like i always did
// on my discord bot commands i always make sure it's lower case
void converTolowerCase(char str[]) {
  // cause the string is already an array that's why it named array of character
  // we can loop entire of it
  for (int i = 0; str[i]; i++) {
    // we change every letter in the string to lowercase using "tolower()" from
    // ctype
    str[i] = tolower(str[i]);
  }
}

void merge(struct Places arr[], int left, int mid, int right, char *sort_by,
           char *order_by) {
  int i, j, k;
  int n1 = mid - left + 1;
  int n2 = right - mid;
  struct Places L[n1], R[n2];

  for (i = 0; i < n1; i++)
    L[i] = arr[left + i];
  for (j = 0; j < n2; j++)
    R[j] = arr[mid + 1 + j];

  i = 0;
  j = 0;
  k = left;

  while (i < n1 && j < n2) {
    int user_decision = 0;
    if (strcmp(sort_by, "location") == 0) {
      user_decision = strcmp(L[i].location, R[j].location);
    } else if (strcmp(sort_by, "price") == 0) {
      user_decision = (L[i].price - R[j].price);
    } else if (strcmp(sort_by, "rooms") == 0) {
      user_decision = (L[i].rooms - R[j].rooms);
    } else if (strcmp(sort_by, "bathroom") == 0) {
      user_decision = (L[i].bathroom - R[j].bathroom);
    }
    if (strcmp(order_by, "asc") == 0) {
      if (user_decision <= 0) {
        arr[k] = L[i];
        i++;
      } else {
        arr[k] = R[j];
        j++;
      }
    } else if (strcmp(order_by, "desc") == 0) {
      if (user_decision >= 0) {
        arr[k] = L[i];
        i++;
      } else {
        arr[k] = R[j];
        j++;
      }
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(struct Places arr[], int left, int right, char *sort_by,
               char *order_by) {
  if (left < right) {
    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid, sort_by, order_by);
    mergeSort(arr, mid + 1, right, sort_by, order_by);

    merge(arr, left, mid, right, sort_by, order_by);
  }
}

void searchRow(struct Places arr[], int left, int right, char *column,
               char *target) {
  mergeSort(arr, 0, total_places - 1, column, "asc");
  int found = 0;
  int mid = left + (right - left) / 2;
  while (right >= left) {
    mid = left + (right - left) / 2;
    int cmp = strcmp(arr[mid].location, target);

    if (cmp == 0) {
      found = 1;

      printf("%-20s%-20s%-15d%-10d%-12d%-12d%-14s%-15s\n", arr[mid].location,
             arr[mid].city, arr[mid].price, arr[mid].rooms, arr[mid].bathroom,
             arr[mid].carpark, arr[mid].type, arr[mid].furnish);

      int i = mid - 1;
      while (i >= left) {
        int cmpLeft;
        if (strcmp(column, "location") == 0) {
          cmpLeft = strcmp(arr[i].location, target);
        } else if (strcmp(column, "city") == 0) {
          cmpLeft = strcmp(arr[i].city, target);
        } else if (strcmp(column, "type") == 0) {
          cmpLeft = strcmp(arr[i].type, target);
        } else {
          cmpLeft = strcmp(arr[i].furnish, target);
        }

        if (cmpLeft == 0) {
          printf("%-20s%-20s%-15d%-10d%-12d%-12d%-14s%-15s\n", arr[i].location,
                 arr[i].city, arr[i].price, arr[i].rooms, arr[i].bathroom,
                 arr[i].carpark, arr[i].type, arr[i].furnish);
          i--;
        } else {
          break;
        }
      }

      int j = mid + 1;
      while (j <= right) {
        int cmpRight;
        if (strcmp(column, "location") == 0) {
          cmpRight = strcmp(arr[j].location, target);
        } else if (strcmp(column, "city") == 0) {
          cmpRight = strcmp(arr[j].city, target);
        } else if (strcmp(column, "type") == 0) {
          cmpRight = strcmp(arr[j].type, target);
        } else {
          cmpRight = strcmp(arr[j].furnish, target);
        }

        if (cmpRight == 0) {
          printf("%-20s%-20s%-15d%-10d%-12d%-12d%-14s%-15s\n", arr[j].location,
                 arr[j].city, arr[j].price, arr[j].rooms, arr[j].bathroom,
                 arr[j].carpark, arr[j].type, arr[j].furnish);
          j++;
        } else {
          break;
        }
      }

      waitEnter("Enter sekali lagi untuk melanjutkan");
      return;
    } else if (cmp > 0) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }

  if (!found) {
    puts("Gak ketemu coy!");
  }

  waitEnter("Enter sekali lagi untuk melanjutkan");
}

// alias: save file :v
void exportFile(char fileName[]) {
  char *extension = strcat(fileName, ".csv");
  fptr = fopen(fileName, "w");
  if (fptr == NULL) {
    printf("Lah gak bisa open filenya, ada sesuatu yang salah nampaknya\n");
    return;
  }

  fprintf(fptr, "Location,City,Price,Rooms,Bathroom,Carpark,Type,Furnish\n");
  for (int i = 0; i < total_places; i++) {
    fprintf(fptr, "%s,%s,%d,%d,%d,%d,%s,%s\n", place[i].location, place[i].city,
            place[i].price, place[i].rooms, place[i].bathroom, place[i].carpark,
            place[i].type, place[i].furnish);
  }

  printf("Datanya udah ke save dengan nama %s\n", fileName);
}

int main() {
  int choice = 1;
  readFile();
  int rows_to_display;
  char column[50], order[5] = "asc";
  char target[50], filename[80];

  while (1) {
    displayMenu();
    printf("Pilih angka 1-5 aja jangan kurang atau lebih: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("\n\n\n\nBerapa baris yang lu mau display bang? ");
      scanf("%d", &rows_to_display);
      displayData(rows_to_display);
      break;
    case 2:
      printf("Mau search kolom yang mana? ");
      scanf("%s", column);
      printf("Target yang kamu mau search apa? (pastiin penulisanmu betul) "
             "[case-sensitive] ");
      scanf("%s", target);
      converTolowerCase(column);
      searchRow(place, 0, total_places - 1, column, target);
      break;
    case 3:
      printf("Mau sort kolom yang mana? ");
      scanf("%s", column);
      getchar();
      printf("Mau kayak gimana sortnya (asc - desc) ");
      scanf("%s", order);
      converTolowerCase(column);
      converTolowerCase(order);
      mergeSort(place, 0, total_places - 1, column, order);
      displayData(10);

      break;
    case 4:
      printf("Mau ngesave filenya dengan nama apa? ");
      scanf("%s", filename);
      exportFile(filename);
      break;
    case 5:
      puts("Aight see you brother maybe next time");
      return 0;
      break;
    default:
      puts("Masukin angka 1-5 aja di baca dong :)");
      break;
    }
  }

  fclose(fptr);
  return 0;
}
