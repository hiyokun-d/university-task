#include <stdio.h>

int main() {
    int range;
    scanf("%d", &range);

    for (int i = 1; i <= range; i++) {
        long long int nHouse, differenceHeight = 0;
        scanf("%lld", &nHouse);

        if (nHouse > 1) {
            long long int prevHeight, currentHeight;
            scanf("%lld", &prevHeight);

            for (int j = 1; j < nHouse; j++) {
                scanf("%lld", &currentHeight);
                long long int currentDifference = currentHeight - prevHeight;
                if (currentDifference < 0) {
                    currentDifference = -currentDifference;
                }
                if (j == 1 || currentDifference < differenceHeight) {
                    differenceHeight = currentDifference;
                }
                prevHeight = currentHeight;
            }
        } else if (nHouse == 1) {
            scanf("%lld", &differenceHeight);
        }

        printf("Case #%d: %lld\n", i, differenceHeight);
    }

    return 0;
}