#include<stdio.h>

int main(){
    int range, position, j, binary[999];
    long long int num;
    scanf("%d",&range);

    for (int i = 0; i < range; i++)
    {
        scanf("%lld %d", &num, &position);
        for (j = 0; num > 0; j++)
        {
            binary[j] = num % 2;
            num /= 2;
        }
        
        printf("%d\n", binary[position]);
    }
    return 0;
}