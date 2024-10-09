#include <stdio.h>

int main()
{
    int n; // TEST CASE PANTEK LAGI UHUUUUYYYYY ASIK NIHHHH
    scanf("%d", &n);

    int result[n][100];
    int nig[n]; // SIZE ----GAAA
    for (int i = 0; i < n; i++)
    {
        int x; // seberapa gede matrix arranya ntar kalo 3 jadinya X x X
        scanf("%d", &x);
        nig[i] = x; // NIGGGGGGGGGG

        int matrix[x][x];     // FILM THE MATRIX ANJAAAYYYY
        int resultColSums[x]; // buat ngambil semua hasil penjumlahan dari kolomnya

        for (int j = 0; j < x; j++)
        {
            resultColSums[j] = 0; // ngisi semuanya jadi 0 anjay
        }

        // make double array karena MATRIXNYA AJA 2D ARRAY
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < x; k++)
            {
                scanf("%d", &matrix[j][k]);
                resultColSums[k] += matrix[j][k];
            }
        }


        // printf("Case #%d:", i);
        for (int j = 0; j < x; j++)
        {
            result[i][j] = resultColSums[j];
        }
    }

    for(int i = 0; i < n; i++) {
        printf("Case #%d:", i+1);

        for (int j = 0; j < nig[i]; j++) /* nig = x */ {
            printf(" %d", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}