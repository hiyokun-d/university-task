#include <stdio.h>

short checkerman(short m, short n)
{
    if (m == 0)
    {
        return n + 1;
    }

    if (m > 0 && n == 0)
    {
        return checkerman(m - 1, 1);
    }

    return checkerman(m - 1, checkerman(m, n - 1));
}

int main()
{
    int n, m;
    scanf("%d %d", &m, &n);

    int result = checkerman(m, n);
    printf("result: %d\n", result);
    return 0;
}