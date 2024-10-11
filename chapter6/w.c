#include <stdio.h>
#include <stdbool.h>

#define MAX_N 200

int main()
{
    int T;
    scanf("%d", &T);

    int result[T];

    for (int case_num = 1; case_num <= T; case_num++)
    {
        int N;
        scanf("%d", &N);

        int A[MAX_N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        int cool_factor = 0;
        bool canBeSummed[MAX_N + 1] = {false};

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i != j)
                {
                    int sum = A[i] + A[j];
                    if (sum <= MAX_N)
                    {
                        canBeSummed[sum] = true;
                    }
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            if (canBeSummed[A[i]])
            {
                cool_factor++;
            }
        }

        // result[case_num] = cool_factor;
        printf("Case #%d: %d\n", case_num, cool_factor);
    }

    // for (int i = 0; i < T; i++)
    // {
    //     printf("Case #%d: %d\n", i + 1, result[i]);
    // }
    return 0;
}