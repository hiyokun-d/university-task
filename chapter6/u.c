#include <stdio.h>
#include <string.h>

// GW DEFINISIIN DULU MAX_CASE AMA MAX N NYA BIAR ENAK GW UBAH UBAH NANTI
#define MAX_CASES 100
#define MAX_N 1000

int main()
{
    int n, x, p, o; // n = test case, x jumlah angka, p ama q bakalan kita pake buat berbandingan
    scanf("%d", &n);

    char result[MAX_CASES][20];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x); // kita set maksimal angka yang akan kita terima
        int num[1000];

        for (int j = 0; j < x; j++)
        {
            scanf("%d", &num[j]);
        }

        scanf("%d %d", &p, &o);

        int a = num[p - 1]; // angka dari bibi
        int b = num[o - 1]; // angka dari lili

        // kita akan simpan data ini ke result Array biar ngemudahin aja ntar
        sprintf(result[i - 1], "Case #%d : ", i);
        if (a > b)
        {
            strcat(result[i - 1], "Bibi"); //? ngeupdate resulnya supaya nambahin Bibi jadinya kayak gini "Case #%d : bibi"
        }
        else if (b > a)
        {
            strcat(result[i - 1], "Lili");
        }
        else
        {
            strcat(result[i - 1], "Draw");
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", result[i]); //? seperti yang kita ketahui tadikan kita udah ngisi result dengan data nah maka dari itu kita tinggal panggil seperti biasanya aja
    }

    return 0;
}