#include <stdio.h>

int main()
{
    int n; // bukan testcase lagi
    scanf("%d", &n);

    int a[n], b[n]; // take newPosition and length
    int c[n];

    for (int j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
    }

    for (int j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }

    for (int j = 0; j < n; j++)
    {
        c[a[j]] = b[j];
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d", c[j]);
        if (j != n - 1)
        {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}