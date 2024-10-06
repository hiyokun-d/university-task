#include<stdio.h>

int main(){
    int a, b;
    long long int c, sum;
    scanf("%d",&a);			//  TC

    for (int i = 0; i < a; i++)
    {
        sum = 0;
        scanf("%d",&b);			//banyakny c
        for (int j = 0; j < b; j++)
        {
            scanf("%lld",&c); // c
            sum += c;
        }
        printf("Case #%d: %lld\n", i+1, sum);
        
        
    }
    return 0;
}