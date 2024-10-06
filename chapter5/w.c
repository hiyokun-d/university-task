#include<stdio.h>

int main(){
    int a, total, b;
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        int odd = 0, even = 0;
        scanf("%d",&total);
        for (int j = 0; j < total; j++)
        {
            scanf("%d", &b); 				//input angkany
            if (b %  2 == 0)
            {
                even++;
            } else {
                odd++;
            }   
        }
        printf("Odd group : %d integer(s).\n", odd);
        printf("Even group : %d integer(s).\n\n", even);
    }
    return 0;
}