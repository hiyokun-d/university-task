#include<stdio.h>
#include<string.h>

int main(){
    int a, x;
    char y[101];
    scanf("%d",&a);			//TC
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &x);
        scanf("%s", y);
        int lili = 0, bibi =0;			//pertamany kn blom menang sama sekali
        for (int j = 0; j < strlen(y); j++)
        {
            if (y[j] == 'B')			//buat masukin B/L klo ada bibi / lili
            {
                bibi++;
            } else if (y[j] == 'L'){
                lili++;
            }
            
        }
        
        if (bibi > lili)
        {
            printf("Bibi\n");
        } else if (bibi < lili){
            printf("Lili\n");
        } else {
            printf("None\n");
        }
        
    }
    return 0;
}