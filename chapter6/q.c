#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++)
    {
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);

        int patterns[N][M];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                scanf("%d", &patterns[i][j]);
            }
        }

        int visits[Q];
        for (int i = 0; i < Q; i++)
        {
            scanf("%d", &visits[i]);
        }

        int lights[M];
        for (int j = 0; j < M; j++)
        {
            lights[j] = 0;
        }

        for (int i = 0; i < Q; i++)
        {
            int friendIndex = visits[i] - 1;
            for (int j = 0; j < M; j++)
            {
                if (patterns[friendIndex][j] == 1)
                {
                    lights[j] = !lights[j];
                }
            }
        }

        printf("Case #%d:\n", t);
        for (int j = 0; j < M; j++)
        {
            if (lights[j])
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}
