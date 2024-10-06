#include <stdio.h>
#include <stdlib.h>

//? buat ngecompare 2 angka supaya ngebantu ngurutin dari yang gede ampe kebesar
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

/*
6 JUMLAH INPUT (ITEM) YANG HARUS DIMASUKKAN USER
4 5 JUMLAH HARGA NARK- I MEAN CANDY
1 2 3 4 (1$ 2$ 3$ 4$)


3 3
5 5 5
3 2
1 1 1
10 5
1 1 1 1 1 2 2 2 2 2
6 2
1 2 3 6 5 4
1 5
1
 */

//* CODE FLOW:
/*
    ambil input jumlah item yang dimau oleh user in this case 6 >
    ngebaca jumlah harga ama duit yang dipunya ama bibi >
    ambil input lagi buat ngumpulin harga permen enak dan nyimpen kedalam array >
    ngesort arraynya dari kecil ampe yang besar pake qsort ama function compare buat ngebantu kalkulasi >
    ngecek kalo total yang dia pakai (M) + (duit  / harga[i]) itu lebih gede dari (<) jumlah duitnya (minggir lu miskin) >
    kalo hasilnya true (P) maka (->) kita tambahin jumlah total (M) dengan value harga[i], sekalian ama jumlah permennya>
    OUTPUT
 */
int main()
{
    int T, N, i;
    scanf("%d", &T);

    long long M, candies[T];
    for (int case_num = 1; case_num <= T; case_num++)
    {
        //? N HARGA
        //? M UANG
        scanf("%d %lld", &N, &M);
        int prices[N];

        for (i = 0; i < N; i++)
        {
            //* ngebaca nilai prices
            scanf("%d", &prices[i]);
        }

        //? qsort disini buat ngesort arraynya dari kecil ampe ke besar biar ngitungnya enak
        qsort(prices, N, sizeof(int), compare);

        //? reset valuenya jadi 0 balik
        candies[case_num] = 0;

        for (i = 0; i < N; i++)
        {
            if (prices[i] <= M)
            {
                candies[case_num] += M / prices[i];
                // ? M total yang di gunakan ama si kampret satu ini
                M %= prices[i];
            }
            else
            {
                break;
            }
        }

    }

    for (int case_num = 1; case_num <= T; case_num++) {
        printf("Case #%d: %lld\n", case_num, candies[case_num]);
    }

    return 0;
}