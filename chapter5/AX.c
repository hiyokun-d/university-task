#include <stdio.h>

int main() {
    int n;
    long long  sum = 0, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lld", &num);
        if(num > 0) {
        sum += num;
        }
    }

    printf("%lld\n", sum);

    return 0;
}