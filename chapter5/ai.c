#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int canSplit[T];
    for (int t = 1; t <= T; t++)
    {
        int N;
        scanf("%d", &N);

        int arr[N];
        long long totalSum = 0;

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
            totalSum += arr[i];
        }

        canSplit[t] = 0;
        if (totalSum % 2 != 0)
        {
            canSplit[t] = 0;
            continue;
        }

        long long halfSum = totalSum / 2;
        long long currentSum = 0;

        for (int i = 0; i < N; i++)
        {
            currentSum += arr[i];
            if (currentSum == halfSum)
            {
                canSplit[t] = 1;
                break;
            }
        }
    }

    for (int t = 1; t <= T; t++)
    {
        if (canSplit[t])
        {
            printf("Case #%d: Yes\n", t);
        }
        else
        {
            printf("Case #%d: No\n", t);
        }
    }
    return 0;
}