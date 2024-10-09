#include <stdio.h>

int main()
{
    int n; // TEST CASE LAGI
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int y; // JUMLAH COLUMN YANG DI MAU AMA USER
        scanf("%d", &y);

        int colsums[y];

        for(int j = 0; j < y; j++) {
            colsums[j] = 0;
        }

        for(int j = 0; j < y; j++) {
            for(int k = 0; k < y; k++) {
                int value;
                scanf("%d", &value);
                colsums[k] += value;
            }
        }

        printf("Case #%d:", i + 1);
        for(int j = 0; j < y; j++) {
            printf(" %d", colsums[j]); // print column sums
        }
        printf("\n");
    }

    return 0;
}