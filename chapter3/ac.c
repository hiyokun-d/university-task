// #include <stdio.h>

// int main()
// {
//     long long n;
//     scanf("%lld", &n);
    
//     long long d = (1 << n) - 1; // the formula is 2^n - 1

//     printf("%lld\n", d);
//     return 0;
// }

#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    
    // Calculate 2^N - 1
    long long total_outcomes = (1LL << n) - 1; // Use 1LL for long long 2^n

    printf("%lld\n", total_outcomes);
    return 0;
}