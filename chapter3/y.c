#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);  // Read T, even though we know it will be 3

    long long P, N;
    double result[T];

    // Read inputs and calculate results
    for(int i = 0; i < T; i++) {
        scanf("%lld %lld", &P, &N);
        result[i] = (double)(P * N) / 100.0;
    }

    // Output all results
    for(int i = 0; i < T; i++) {
        printf("%.2f\n", result[i]);
    }

    return 0;
}