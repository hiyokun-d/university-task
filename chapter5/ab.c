#include <stdio.h>

/* 
    CAUSE I CAN'T DO MATH SO I'LL USING GPT FOR THIS AND TRY TO MAKE IT SIMPLE AS FAR AS I COULD
 */

/* 
// Function to calculate the greatest common divisor
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Function to calculate the least common multiple
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

// Function to count multiples of a given number up to N
int count_multiples(int N, int x) {
    return N / x;
}


        // Count multiples of A, B, C, D
        int countA = count_multiples(N, A);
        int countB = count_multiples(N, B);
        int countC = count_multiples(N, C);
        int countD = count_multiples(N, D);

        // Use inclusion-exclusion principle for pairs and triples
        int countAB = count_multiples(N, lcm(A, B));
        int countAC = count_multiples(N, lcm(A, C));
        int countAD = count_multiples(N, lcm(A, D));
        int countBC = count_multiples(N, lcm(B, C));
        int countBD = count_multiples(N, lcm(B, D));
        int countCD = count_multiples(N, lcm(C, D));

        int countABC = count_multiples(N, lcm(lcm(A, B), C));
        int countABD = count_multiples(N, lcm(lcm(A, B), D));
        int countACD = count_multiples(N, lcm(lcm(A, C), D));
        int countBCD = count_multiples(N, lcm(lcm(B, C), D));

        int countABCD = count_multiples(N, lcm(lcm(A, B), lcm(C, D)));

        // Calculate total using inclusion-exclusion principle
        int total = countA + countB + countC + countD
                  - countAB - countAC - countAD - countBC - countBD - countCD
                  + countABC + countABD + countACD + countBCD
                  - countABCD;
 */

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

long long count_multiples(long long n, long long a, long long b, long long c, long long d) {
    long long count = n/a + n/b + n/c + n/d;
    count -= n/lcm(a,b) + n/lcm(a,c) + n/lcm(a,d) + n/lcm(b,c) + n/lcm(b,d) + n/lcm(c,d);
    count += n/lcm(lcm(a,b),c) + n/lcm(lcm(a,b),d) + n/lcm(lcm(a,c),d) + n/lcm(lcm(b,c),d);
    count -= n/lcm(lcm(lcm(a,b),c),d);
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long result[n];
    for (int i = 0; i < n; i++)
    {
        long long n, a, b, c, d;
        scanf("%lld %lld %lld %lld %lld", &n, &a, &b, &c, &d);

        result[i] = count_multiples(n, a, b, c, d);
    }

    for (int i = 0; i < n; i++)
    {
    
    printf("Case #%d: %lld\n", i + 1, result[i]); //? i + 1 disini buat jadiin yang awalnya 0 menjadi 1 gitu aja sih ini comment juga gak penting anjir ngapain juga gw tulis cok
    }
    return 0;
}