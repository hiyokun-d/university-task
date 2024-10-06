#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n], c[n], d[n], e[n], f[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d", &a[i], &b[i], &c[i], &d[i], &e[i], &f[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Case #%d: ", i + 1);

        // Print 'a' A[i] times
        for (int j = 0; j < a[i]; j++)
        {
            printf("a");
        }

        // Print 's' B[i] times
        for (int j = 0; j < b[i]; j++)
        {
            printf("s");
        }

        // Print 'h' C[i] times
        for (int j = 0; j < c[i]; j++)
        {
            printf("h");
        }

        // Print 'i' D[i] times
        for (int j = 0; j < d[i]; j++)
        {
            printf("i");
        }

        // Print 'a' E[i] times
        for (int j = 0; j < e[i]; j++)
        {
            printf("a");
        }

        // Print 'p' F[i] times
        for (int j = 0; j < f[i]; j++)
        {
            printf("p");
        }

        // Newline after each test case output
        printf("\n");
    }

    return 0;
}