#include<stdio.h>

int main(){
    long long int a, b, c, d, count=0;
    scanf("%lld",&a);

    for (int i = 0; i < a; i++)
    {
        scanf("%lld %lld %lld",&b, &c, &d); // sent,solved,viewed
        if (c > d)
        {
            count++;
        }
    }
    printf("%lld\n", count);
    
    return 0;
}