#include <stdio.h>

int main()
{
    int a, b, c;
    char x[101], y[101];

    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b); //jumlah soal 
    
        scanf("%s", x); getchar(); // jawaban
        scanf("%s", y); getchar();	//kunci
        c = 0;
        for (int j = 0; j < b; j++)
        {
            if (x[j] == y[j])
            {
                c++;
            }
        }
        printf("Case #%d: ", i);
        printf("%d\n", c * 100 / b);
    }
}