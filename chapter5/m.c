#include<stdio.h>

int main(){
    int range, foodAmount;
    long long int money, foodPrice, sum;
    scanf("%d",&range);

    for (int i = 1; i <= range; i++)
    {
        sum = 0;
        scanf("%d %lld", &foodAmount, &money);
        for (int j = 0; j < foodAmount; j++)
        {
            scanf("%lld", &foodPrice);
            sum += foodPrice;
        }
        printf("Case #%d: ", i);
        if (money >= sum)
        {
            printf("No worries\n");
        } else {
            printf("Wash dishes\n");
        }
        
    }
    return 0;
    
}