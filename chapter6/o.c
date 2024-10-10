#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool checkMatrix(int N, int matrix[MAX][MAX])
{
    // Check each row
    for (int i = 0; i < N; i++)
    {
        bool seen[N + 1];
        for (int k = 0; k <= N; k++)
        {
            seen[k] = false;
        }
        for (int j = 0; j < N; j++)
        {
            if (seen[matrix[i][j]])
            {
                return false;
            }
            seen[matrix[i][j]] = true;
        }
    }

    // Check each column
    for (int j = 0; j < N; j++)
    {
        bool seen[N + 1];
        for (int k = 0; k <= N; k++)
        {
            seen[k] = false;
        }
        for (int i = 0; i < N; i++)
        {
            if (seen[matrix[i][j]])
            {
                return false;
            }
            seen[matrix[i][j]] = true;
        }
    }

    return true;
}

int main()
{
    int N;
    scanf("%d", &N);

    int matrix[MAX][MAX];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (checkMatrix(N, matrix))
    {
        printf("Yay\n");
    }
    else
    {
        printf("Nay\n");
    }

    return 0;
}