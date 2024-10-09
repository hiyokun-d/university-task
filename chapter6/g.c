#include <stdio.h>

int main()
{
    int n; // gw gak tau ini binus kok soal make test case banyak banget
    scanf("%d", &n);

int result[n];
    for (int i = 0; i < n; i++)
    {
        long long x;
        scanf("%lld", &x);

        long long a[x], b[x];
        int total_failed = 0;

        for (int j = 0; j < x; j++)
        {
            scanf("%lld", &a[j]);
        }

        for (int j = 0; j < x; j++)
        {
            scanf("%lld", &b[j]);
        }

        for (int j = 0; j < x; j++)
        {
            if (a[j] < b[j])
            {
                total_failed++;
            }
        }


        result[i] = total_failed;
    }

    for(int i = 0; i < n; i++) {
        printf("Case #%d: %d\n",  i + 1, result[i]);
    }

    return 0;
}