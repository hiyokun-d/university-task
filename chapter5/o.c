#include<stdio.h>

int main(){
    int range, jmlhp;
    long long int lili, a, p,max;
    scanf("%d",&range);

    for (int i = 1; i <= range; i++)
    {
        scanf("%d %lld %lld", &jmlhp, &lili, &a);
        max = a;
        for (int j = 0; j < jmlhp; j++)
        {
            scanf("%lld", &p);
            if (p <= lili && p > max)
            {
                max = p;
            }
        }
        printf("Case #%d: %lld\n", i, max);
    }
    return 0;
}