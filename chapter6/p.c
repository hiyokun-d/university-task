#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int matrix[N][N];
    int teamCount[N + 1];

    for (int i = 0; i <= N; i++)
    {
        teamCount[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0)
            {
                teamCount[matrix[i][j]]++;
            }
        }
    }

    int incompleteTeams = 0;
    for (int i = 1; i <= N; i++)
    {
        if (teamCount[i] < N)
        {
            incompleteTeams++;
        }
    }
    printf("%d\n", incompleteTeams);

    return 0;
}