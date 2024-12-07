// this code is write by hiyo - Daffa
// https://github.com/hiyokun-d
// https://hiyo-dev.vercel.app
// My Discord server: https://discord.gg/9aP6WM5F (hiyo-d)

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * OBJECTIVE:
 * DISPLAY, DONE!!!!
 * MAKE SEARCH FUNCTION (2), DONE!!!
 * MAKE SORT FUNCTION (3 AND 2), DONE!!!
 * EXPORTING FUNCTION (4), DONE!!!!
 * */

FILE *fptr; // file pointer
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

// ------ MERGE SORT--------
// Merge function to combine two sorted subarrays
void merge(struct Places arr[], int left, int mid, int right, char *sort_by,
           char *order_by) {
  int i = 0, j = 0, k = left;

  // Determine the sizes of these two subarrays
  int n1 = mid - left + 1;
  int n2 = right - mid;

  // it's just temporary array for holding the left and right subarrays
  struct Places L[n1], R[n2];

  // we just copy the data into the left subarray that we made earlier
  for (int i = 0; i < n1; i++)
    L[i] = arr[left + i];

  // and it's just exact same but it's copy the right one :v
  for (int i = 0; i < n2; i++)
    R[i] = arr[mid + 1 + i];

  // merge the the subarrays by comparing their elements based on the user's
  // decision or their preference
  while (i < n1 && j < n2) {
    int user_decision = 0;

    // we'll check which column should be sort by
    if (strcmp(sort_by, "location") == 0) {
      user_decision = strcmp(L[i].location, R[j].location);
    } else if (strcmp(sort_by, "price") == 0) {
      user_decision = (L[i].price - R[j].price);
    } else if (strcmp(sort_by, "rooms") == 0) {
      user_decision = (L[i].rooms - R[j].rooms);
    } else if (strcmp(sort_by, "bathroom") == 0) {
      user_decision = (L[i].bathroom - R[j].bathroom);
    }

    // determine if sorting should be in asc (ascending) or desc (descending)
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

  // copying the remaining elements of L or R (if there was any)
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

// this function will recursively sort an array based on user wants column and
// order
void mergeSort(struct Places arr[], int left, int right, char *sort_by,
               char *order_by) {

  // if there are more than one element in the array segment, proceed with
  // sorting
  if (left < right) {
    // calculate the middle point of the current segment
    int mid = left + (right - left) / 2;

    // sort the left and right just by a half
    mergeSort(arr, left, mid, sort_by, order_by);
    mergeSort(arr, mid + 1, right, sort_by, order_by);

    // merge the two sorted halves together
    merge(arr, left, mid, right, sort_by, order_by);
  }

  // keren bet kata kata gw :v segment segment wkwkwkwkwk
}
//---------------------------------------------------------------------

//-------BINARY SEARCH-----------
// This function just to search for a target value within a sepcific column of
// the places array using binary search algorithm to find the target in a sorted
// array
void searchRow(struct Places arr[], int left, int right, char *column,
               char *target) {
  // to use binary search we need to sort the array based on the specified
  // column before we performing the searching and cause we already have
  // function to do that i will just gonna called that function
  mergeSort(arr, 0, total_places - 1, column, "asc");

  int found = 0;
  int mid = left + (right - left) / 2;

  // and then we'll do the binary search to find the target
  while (right >= left) {
    mid = left + (right - left) / 2;

    // compare the middle element's "location" field with the target string,
    // Binary search is assumes the array is sorted by the location field
    int cmp = strcmp(arr[mid].location, target);

    // if we found the target then we'll gonna return the result
    if (cmp == 0) {
      found = 1;

      printf("%-20s%-20s%-15d%-10d%-12d%-12d%-14s%-15s\n", arr[mid].location,
             arr[mid].city, arr[mid].price, arr[mid].rooms, arr[mid].bathroom,
             arr[mid].carpark, arr[mid].type, arr[mid].furnish);

      int i = mid - 1;

      // search for any duplicate records on the left and right side of the
      // current middle element.
      while (i >= left) {
        int cmpLeft;
        // compare based on the column that it passed
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

      // like i said this function is gonna stop and wait for the user action
      waitEnter("Enter sekali lagi untuk melanjutkan");
      return;
    } else if (cmp > 0) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }

  // do i need to explain this one?
  // if it's not found
  if (!found) {
    puts("Gak ketemu coy!");
  }

  // i don't need to explain this one just scroll UP!
  waitEnter("Enter sekali lagi untuk melanjutkan");
}
//-------------------------------------------------------------------------------

//-------------------------------------
/// this code is write by hiyo - Daffa
// https://github.com/hiyokun-d
// https://hiyo-dev.vercel.app
// My Discord server: https://discord.gg/9aP6WM5F (hiyo-d)
//--------------------------------------------------------

// alias: save file :v
// it's just saving the file
void exportFile(char fileName[]) {
  // we'' add ".csv" in the filename'
  char *extension = strcat(fileName, ".csv");

  // then we'll open the file in write mode cause it can make a new file
  fptr = fopen(fileName, "w");

  // if we can't open the file
  if (fptr == NULL) {
    printf("Lah gak bisa open filenya, ada sesuatu yang salah nampaknya\n");
    return;
  }

  // write the header row to the file
  fprintf(fptr, "Location,City,Price,Rooms,Bathroom,Carpark,Type,Furnish\n");

  // loop throught the array and then write it into the file that we was made
  for (int i = 0; i < total_places; i++) {
    fprintf(fptr, "%s,%s,%d,%d,%d,%d,%s,%s\n", place[i].location, place[i].city,
            place[i].price, place[i].rooms, place[i].bathroom, place[i].carpark,
            place[i].type, place[i].furnish);
  }

  // it's just tell the user if the file was saved and tell them what's the name
  // of the file
  printf("Datanya udah ke save dengan nama %s\n", fileName);
}

int main() {
  // we'll gonna read the file and store it in place array
  readFile();

  int choice = 1;
  int rows_to_display;
  char column[50], order[5] = "asc";
  char target[50], filename[80];

  // just do infinite loop to display the menu until user choose to exit or stop
  // the program
  while (1) {
    // display the menu using the function that we made
    displayMenu();

    // ask user to pick an action and take user's action
    printf("Pilih angka 1-5 aja jangan kurang atau lebih: ");
    scanf("%d", &choice);

    switch (choice) {
      // if user pick 1 (display data)
    case 1:
      // ask user how much they want to display the data and then store it in
      // rows_to_display variable
      printf("\n\n\n\nBerapa baris yang lu mau display bang? ");
      scanf("%d", &rows_to_display);

      // display the data
      displayData(rows_to_display);
      break;

      // if user pick 2 (searching)
    case 2:
      // ask user what's column that they want to search based on
      printf("Mau search kolom yang mana? ");
      scanf("%s", column);
      // what target they want to search like
      printf("Target yang kamu mau search apa? (pastiin penulisanmu betul) "
             "[case-sensitive] ");
      scanf("%s", target);
      // convert the column to make sure there's no any mistake like "LoCaTiON"
      // we'll gonna convert it into "location"
      converTolowerCase(column);

      // after all of that we'll gonna search it also display it
      searchRow(place, 0, total_places - 1, column, target);
      break;

      // if user pick 3 (sort)
    case 3:
      // yeah just ask the which column they want to sort and what's order they
      // want it to be and then store all of the value that we got into variable
      // column and order
      printf("Mau sort kolom yang mana? ");
      scanf("%s", column);
      getchar();
      printf("Mau kayak gimana sortnya (asc - desc) ");
      scanf("%s", order);
      // conver the column and order into lower case
      converTolowerCase(column);
      converTolowerCase(order);

      // sort it using merge sort
      mergeSort(place, 0, total_places - 1, column, order);

      // and then display the data but it's gonna display just 10 rows
      displayData(10);
      break;

      // if user pick 4 (save)
    case 4:
      // yeah it's gonna ask user what name of the file gonna be and then store
      // it in filename
      printf("Mau ngesave filenya dengan nama apa? ");
      scanf("%s", filename);

      // we'll gonna save the file using export file
      exportFile(filename);
      break;

      // if user pick 5 (exit)
    case 5:
      // say goodbye to user
      puts("Aight see you brother maybe next time");

      // stop the program
      return 0;
      break;

      // if user don't put the number correctly or it's greater or less
    default:
      // we'll tell them
      puts("Masukin angka 1-5 aja di baca dong :)");
      break;
    }
  }

  // make sure the file is closed
  fclose(fptr);
  return 0;
}

// this code is write by hiyo - Daffa
// https://github.com/hiyokun-d
// https://hiyo-dev.vercel.app
// My Discord server: https://discord.gg/9aP6WM5F (hiyo-d)
