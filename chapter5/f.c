#include <stdio.h>

int main() {
    int size, syarat;

    // size n syarat
    scanf("%d %d", &size, &syarat);

    // buat # dengan ukuran A
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");

    // buat # dan . dengan syarat (baris)
    for (int i = 1; i <= size; i++) {
        if (i % syarat == 0) {
            for (int j = 0; j < size; j++) {
                printf("#");
            }
        } else {
            for (int j = 0; j < size; j++) {
                printf(".");
            }
        }
        printf("\n");
    }
    printf("\n");

    // buat # n . sesuai dengan syarat (kolom)
    for (int i = 0; i < size; i++) {
        for (int j = 1; j <= size; j++) {
            if (j % syarat == 0) {
                printf("#");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}