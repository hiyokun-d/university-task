#include <stdio.h>

int tillOne(int n)
{
    if (n == 1)
    {
        return 1;
    }

    if (n % 2 != 0)
    {
        return tillOne(n - 1) + tillOne(n + 1);
    }

    return tillOne(n / 2);
}

int main()
{
    int t;
    scanf("%d", &t);

    int n;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("Case #%d: %d\n", i + 1, tillOne(n));
    }

    return 0;
}