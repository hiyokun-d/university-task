#include <stdio.h>

int main() {
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);

    int t = 0;
    while (t <= 100) {
        if (x + t == y - t && x + t == k) {
            printf("%d\n", t);
            return 0;
        }
        t++;
    }

    printf("-1\n");
    return 0;
}

