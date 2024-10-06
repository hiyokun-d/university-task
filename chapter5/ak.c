#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int Ai[n]; // Array to store the numbers Bibi said
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Ai[i]);
    }

    int stepcount = 0; // counting doang anjay
    for (int i = 0; i < n; i++)
    {
        stepcount++;

        if(Ai[i] == 1 && stepcount > 1) {
            printf("%d ", stepcount - 1);
            stepcount = 1;
        }

        if(i == n - 1) {
            printf("%d\n", stepcount);
        }
    }

    return 0;
}