#include <stdio.h>

int main() {
    int T;
    long long N, M;
    
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++) {
        scanf("%lld %lld", &N, &M);
        
        printf("Case #%d: ", i);
        if ((N * M) % 2 == 0) {
            printf("Party time!\n");
        } else {
            printf("Need more frogs\n");
        }
    }
    
    return 0;
}