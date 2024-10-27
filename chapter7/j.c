#include <stdio.h>

int epicgames(int n)
{
    int turn = 0; // ngetrack giliran lili ama jojo buat jika hasilnya genap maka lili yang menang
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
            n = n * 3 + 1;

        turn++;
    }

    return turn;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        int epic = epicgames(num);

        if (epic % 2 == 0)
        {
            printf("Case #%d: Lili\n", i + 1);
        }
        else
            printf("Case #%d: Jojo\n", i + 1);
    }
    return 0;
}