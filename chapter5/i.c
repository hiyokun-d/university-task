#include<stdio.h>

int main(){
    int musuh; 
    double nmusuh, jojo, lili, bibi, sum = 0;
    double average;

    scanf("%d",&musuh);
    scanf("%lf %lf %lf", &jojo, &lili, &bibi);
    sum = jojo + lili + bibi;
    for (int i = 0; i < musuh; i++)
    {
        scanf("%lf",&nmusuh);
        sum += nmusuh;
    }
    average = sum / (musuh+3);
    if (jojo >= average)
    {
        printf("Jojo lolos\n");
    } else {
        printf("Jojo tidak lolos\n");
    }
    if (lili >= average)
    {
        printf("Lili lolos\n");
    } else {
        printf("Lili tidak lolos\n");
    }
    if (bibi >= average)
    {
        printf("Bibi lolos\n");
    } else {
        printf("Bibi tidak lolos\n");
    }
    return 0;
}