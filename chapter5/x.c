#include <stdio.h>

int main() {
    int Q;
    long long int N = 1;

    scanf("%d", &Q);  // Read the number of processes (Q)
    
    for (int i = 0; i < Q; i++) {
        N = N * 2 + 1;  // Multiply N by 2 and add 1 in each process
    }
    
    printf("%lld\n", N);  // Output the result after Q processes

    return 0;
}