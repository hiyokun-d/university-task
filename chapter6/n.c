#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++)
    {
        int N;
        scanf("%d", &N);

        int values[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &values[i]);
        }

        int max1 = values[0];
        int max2 = values[1];

        if (max2 > max1)
        {
            int temp = max1;
            max1 = max2;
            max2 = temp;
        }

        for (int i = 2; i < N; i++)
        {
            if (values[i] > max1)
            {
                max2 = max1;
                max1 = values[i];
            }
            else if (values[i] > max2)
            {
                max2 = values[i];
            }
        }

        printf("Case #%d: %d\n", t, max1 + max2);
    }

    return 0;
}