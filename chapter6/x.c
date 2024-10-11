#include <stdio.h>

#define MAX_N 500
#define MAX_M 500

int main()
{
    int T; // number of test cases
    scanf("%d", &T);

    for (int case_num = 1; case_num <= T; case_num++)
    {
        int N, M; // N = number of children, M = number of chocolates each child holds
        scanf("%d %d", &N, &M);

        int max_weights[MAX_N]; // Array to store maximum weight of chocolates from each child
        for (int i = 0; i < N; i++)
        {
            int max_weight = 0; // Initialize max weight for this child
            for (int j = 0; j < M; j++)
            {
                int weight;
                scanf("%d", &weight);
                if (weight > max_weight)
                {
                    max_weight = weight; // Update max weight if current weight is greater
                }
            }
            max_weights[i] = max_weight; // Store the maximum weight from this child
        }

        // Calculate the total maximum weight Jojo can get
        long long total_weight = 0;
        for (int i = 0; i < N; i++)
        {
            total_weight += max_weights[i]; // Sum up the maximum weights
        }

        // Output the result for the test case
        printf("Case #%d: %lld\n", case_num, total_weight);
    }

    return 0;
}