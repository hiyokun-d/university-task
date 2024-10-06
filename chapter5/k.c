#include<stdio.h>

int main(){
    int a, b;
    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
    {
        scanf("%d",&b);
        printf("Case #%d:\n", i);
        for (int j = 1; j <= b; j++)//print enter = baris
        {
            for (int k = 1; k <= b; k++)//kolom
            {
                if (k <= b-j)
                {
                    printf(" ");
                } else if ((k+j) % 2 == 0){
                    printf("*");
                } else if ((k+j) % 2 == 1){
                    printf("#");
                }
            }
            printf("\n");
        }
        
    }
   return 0; 
}