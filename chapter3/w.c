#include <stdio.h>

int middleVal(int num) {
    return (num / 10) % 10;
}

int main()
{
    int a;


    for(int i = 0; i < 3; i++) {
        scanf("%d", &a);

        if(a >= 100 & a <= 999) {
            printf("%d\n", middleVal(a));
        } else return 0;
    }
    return 0;
}