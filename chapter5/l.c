#include<stdio.h>

int main(){
    int range;
    long long int b, c, p, d, i; //b,b,p,new

    scanf("%d",&range);
    for (i = 1; i <= range; i++)
    {
        scanf("%lld %lld",&c,&p);
        b = c;
        while (c >= p)
        {
            d = c/p; // b/p
            b += d;		//b++
            c = d + c % p; // new+ botol %p
        }
        printf("Case #%d: %lld\n", i, b);
    }
}