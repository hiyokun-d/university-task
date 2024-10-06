#include <stdio.h>

int countOnBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main()
{
    int T;
    scanf("%d", &T);

    int atLeastThreeOnBits[T];
    int lessThanThreeOnBits[T];

    for (int test = 1; test <= T; test++)
    {
        int N;
        scanf("%d", &N);

        int arr[100];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        atLeastThreeOnBits[test] = 0;
        lessThanThreeOnBits[test] = 0;

        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int xorResult = arr[i] ^ arr[j];
                int onBits = countOnBits(xorResult);

                if (onBits >= 3)
                {
                    atLeastThreeOnBits[test]++;
                }
                else
                {
                    lessThanThreeOnBits[test]++;
                }
            }
        }
    }

for (int test = 1; test <= T; test++) {
       printf("Case #%d: %d %d\n", test, atLeastThreeOnBits[test], lessThanThreeOnBits[test]);
}
    return 0;
}