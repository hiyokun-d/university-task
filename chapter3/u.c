#include <stdio.h>

int main()
{
    int T;
    long long A, B;

    scanf("%d", &T);

    double rotations[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%lld %lld", &A, &B);

        long long totalDegrees = A * B;

        rotations[i] = (double)totalDegrees / 360.0;

    }

    for (int i = 0; i < T; i++)
    {
        printf("%.2lf\n", rotations[i]);
    }
    return 0;
}