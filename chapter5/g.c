#include<stdio.h>

int main(){
    int cage;
    long long int a, sum=0;
    scanf("%d",&cage);
    for (int i = 0; i < cage; i++)
    {
        scanf("%lld",&a); //jumlah binatangny
        sum += a;
    }
    printf("%lld\n", sum);
    
    return 0;
}