#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int dummy[n]; // P but global
    long long result[n][100];

    for (int i = 0; i < n; i++)
    {
        int p;
        scanf("%d", &p);
        dummy[i] = p;
        long long a[p], b[p];

        for (int j = 0; j < p; j++)
        {
            scanf("%lld", &a[j]);
        }
        for (int j = 0; j < p; j++)
        {
            scanf("%lld", &b[j]);
        }

        for (int j = 0; j < p; j++)
        {
            result[i][j] = a[j] - b[j];
        }
    }

    for(int i = 0; i < n; i++) {
        printf("Case #%d:", i+1);
        for (int j = 0; j < dummy[i]; j++)
        {
            printf(" %lld", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}