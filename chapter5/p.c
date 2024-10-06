#include<stdio.h>

int main(){
    int range;
    long long int distance, count;
    long long int first, temp, add;

    scanf("%d",&range);
    for (int i = 1; i <= range; i++)
    {
        count = 0;
        first = 1;
        add = 1;
        scanf("%lld", &distance);
        while (first <= distance)
        {
            count++;
            first += add;
            add++;
        }
        printf("Case #%d: %lld\n", i, count);
    }
    return 0;
}