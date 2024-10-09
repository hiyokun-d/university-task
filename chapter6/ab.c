#include <stdio.h>

void multiplyMatrices(int N, int A[N][N], int B[N][N], int result[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            result[i][j] = 0; // Initialize result matrix
            for (int k = 0; k < N; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n); // to read how much we need to calculate the matrix

        int A[n][n], B[n][n], C[n][n], temp[n][n], result[n][n];

        // Read first matrix
        for (int k = 0; k < n; k++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &A[k][j]);
            }
        }

        // Read second matrix
        for (int k = 0; k < n; k++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &B[k][j]);
            }
        }

        // Read third matrix
        for (int k = 0; k < n; k++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &C[k][j]);
            }
        }

        // we'll just called the function to calculate all of them
        multiplyMatrices(n, A, B, temp);      // kita simpen dulu di file temp
        multiplyMatrices(n, temp, C, result); // udah itu kita calculate lagi buat simpen di file result

// okay fuck it i'll be make an output with this one
        printf("Case #%d:\n", i + 1);
        for (int k = 0; k < n; k++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d", result[k][j]);
                if (j < n - 1)
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}