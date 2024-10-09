#include <stdio.h>

int main()
{
    int n;           // TEST CASE INPUT
    scanf("%d", &n); // BUAT NGANUIN TEST CASENYA

    int m[n]; // PRICESNYA YANG GW STORE DI ARRAYYYYYYYYYY
    int result[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }

    int q; //  ngecek update yang dimau ama user pantek itu
    scanf("%d", &q);

    int updates[q][2]; // karena kita butuh 2 input doang kayak "5 4" ama jumlah input yang diingankan mengikuti q doang

    // LOOPING DOANG INI MALES GW JELASIN NTAR BUAT DIRI GW LU SURUH GPT JELASIN LAH
    for(int i = 0; i < q; i++) {
        scanf("%d %d", &updates[i][0], &updates[i][1]); // INI GAMPANG LOH COK! MASA GW JELASIN SIH ANJIR
    }

    // nah kalo inputnya udah semua gw mau proses semua datanya buat kita hasilin output
    for(int i = 0; i < q; i++) {
        int a = updates[i][0] - 1; // kita convert ke 0 based index
        int b = updates[i][1];
        m[a] = b; // ngubah pricesnya

        printf("Case #%d: ", i+1);
        for(int j = 0; j < n; j++) {
            printf("%d", m[j]);
            // ini buat ngecek kalo ini tuh udah di bagian akhir arraynya kalo iya kita gak akan buat whitespace lagi
            if(j < n - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}