#include <stdio.h>

void calculateLikes(int N, long long likes[])
{
    likes[1] = 0;
    likes[2] = 1;
    for (int i = 3; i <= N; i++)
    {
        likes[i] = likes[i - 1] + likes[i - 2];
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    int days[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &days[i]);
    }

    int maxN = 0;
    for (int i = 0; i < T; i++)
    {
        if (days[i] > maxN)
        {
            maxN = days[i];
        }
    }

    long long likes[maxN + 1];
    calculateLikes(maxN, likes);

    for (int i = 0; i < T; i++)
    {
        printf("Case #%d: %lld\n", i + 1, likes[days[i]]);
    }

    return 0;
}