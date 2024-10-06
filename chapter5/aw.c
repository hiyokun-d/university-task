#include<stdio.h>

int main(){
    int a, b, x, max; // jmlhkls,jmurid,index,max
    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
    {
        int y[101] = {0};		//nilai
        scanf("%d",&b);
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &x);
            y[x]++;
            if (j == 0)
            {
                max = x;
            } else if (x > max) {
                max = x;
            }
        }
        printf("Case #%d: %d\n", i, y[max]);
    }
    return 0;
}