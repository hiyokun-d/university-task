#include <stdio.h>

int main() {
    int T, A, B;
    
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++) {
        scanf("%d %d", &A, &B);
        
        printf("Case #%d: ", i);
        if (A > B) {
            printf("Go-Jo\n");
        } else {
            printf("Bi-Pay\n");
        }
    }
    
    return 0;
}