#include <stdio.h>

long long count = 0;

int recursion(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    if (n % 3 == 0)
        count++;
    if (n % 5 == 0)
        return n * 2;
    return recursion(n - 1) + n + recursion(n - 2) + n - 2;
}

int main()
{
    int n;
    scanf("%d", &n);

    int f[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    }

    for (int i = 0; i < n; i++)
    {
        count = 0;
        int resolve = recursion(f[i]);
        printf("Case #%d: %d %lld", i + 1, resolve, count);
        if (i < n)
        {
            printf("\n");
        }
    }
    return 0;
}