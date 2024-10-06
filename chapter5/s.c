#include <stdio.h>

int main()
{
    /* DIKETAHUI
    N: jumlah balon yang dipunya ama si kampret
    P: Kekuatan tuh orang
     */

    int n, p; 
    int count = 0;
    scanf("%d %d", &n, &p);

    for (int i = 0; i < n; i++)
    {
        long long sum;
        scanf("%lld", &sum);

        if(p > sum) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}