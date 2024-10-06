/* SAME OUTPUT BUT STILL WRONG?!! WTF
#include <stdio.h>

int main() {
    int N;
    int total_damage = 0;
    int base_damage = 100;
    int bonus_damage = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        total_damage += base_damage + bonus_damage;
        bonus_damage += 50;
    }

    printf("%d\n", total_damage);

    return 0;
}
 */

// fix by GPT
#include <stdio.h>

int main()
{
    long long N; // Use long long to avoid overflow
    long long total_damage;

    // Input the number of hits
    scanf("%lld", &N);

    // Calculate total damage using the optimized formula
    total_damage = N * 100 + 50 * (N * (N - 1)) / 2;

    // Output the total damage
    printf("%lld\n", total_damage);

    return 0;
}