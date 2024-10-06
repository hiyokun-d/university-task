#include<stdio.h>

int main(){
    int range;
    scanf("%d",&range);
    long long int total, target, fromFirst, fromLast;

    for (int i = 1; i <= range; i++)
    {
        scanf("%lld %lld",&total,&target);
        if (target % 2 == 0)
        {
            fromLast = (total-target)/2;
        } else {
            fromLast = (total - target + 1)/2;
        }
        
        fromFirst = target/2;
        printf("Case #%d: ", i);
        if (fromFirst <= fromLast)
        {
            printf("%lld\n", fromFirst);
        } else {
            printf("%lld\n", fromLast);
        }
        
    }
    return 0;
}