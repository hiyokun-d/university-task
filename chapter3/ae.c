#include <stdio.h>

int main()
{
    long long N; // Use long long to avoid overflow
    long long total_damage;

    scanf("%lld", &N);

    total_damage = N * 100 + 50 * (N * (N - 1)) / 2;

    printf("%lld\n", total_damage);

    return 0;
}