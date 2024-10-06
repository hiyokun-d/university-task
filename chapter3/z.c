#include<stdio.h>

int main(){
    int t; 
    double x, y, z, h, d;
    scanf("%d", &t); getchar();
    for (int i = 0; i < 3; i++){
    	scanf("%lf %lf %lf %lf", &x, &y, &z, &h); getchar();
        d = (2*x) + ((y/2)*4) + ((z/3)*4) + ((h/4)*2);
        printf("%.2lf\n", d);
    }
    return 0;
}