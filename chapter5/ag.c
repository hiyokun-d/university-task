#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int N[T];
    for (int t = 1; t <= T; t++)
    {
        N[t] = 0;
        scanf("%d", &N[t]);
    }

    for (int t = 1; t <= T; t++)
    {
        printf("Case %d: ", t);

        for (int i = 0; i < N[t]; i++)
        {

            int pieces = (i * (i + 1)) / 2 + 1;

            printf("%d", pieces);
            if (i < N[t] - 1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}