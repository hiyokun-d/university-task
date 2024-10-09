#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x[1000];
    int num[1000][1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);

        for (int j = 0; j < x[i]; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("Case #%d:", i + 1);
        for (int j = x[i] - 1; j >= 0; j--)
        {
            printf(" %d", num[i][j]);
        }
        printf("\n");
    }
    return 0;
}