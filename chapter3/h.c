#include <stdio.h>

int main() {
    int a[3][4];
    double sum, square[4][4];

    // Input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculation and Output
    for (int i = 0; i < 3; i++) {
        // Construct the square
        square[0][0] = (double)a[i][0] / 1;
        square[0][1] = square[1][0] = (double)a[i][1] / 2;
        square[0][2] = square[1][1] = square[2][0] = (double)a[i][2] / 3;
        square[0][3] = square[1][2] = square[2][1] = square[3][0] = (double)a[i][3] / 4;
        square[1][3] = square[2][2] = square[3][1] = (double)a[i][2] / 3;
        square[2][3] = square[3][2] = (double)a[i][1] / 2;
        square[3][3] = (double)a[i][0] / 1;

        // Sum the square
        sum = 0;
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                sum += square[j][k];
            }
        }

        printf("%.2f\n", sum);
    }

    return 0;
}