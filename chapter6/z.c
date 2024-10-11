#include <stdio.h>

int main()
{
    int T; // number of test cases
    scanf("%d", &T);

    for (int case_num = 1; case_num <= T; case_num++)
    {
        int N, K; // N = length of the hall, K = Jojo's breath capacity
        scanf("%d %d", &N, &K);

        char hall[N + 1]; // Array to store the hall information
        scanf("%s", hall);

        int breath_left = K;
        int can_escape = 0; // Flag to check if Jojo can escape

        for (int i = 0; i < N; i++)
        {
            if (hall[i] == '1')
            {
                // If Jojo can reach a stair
                can_escape = 1;  // Mark that Jojo can potentially escape
                breath_left = K; // Reset breath when reaching stairs
            }
            else
            {
                // If Jojo steps on a normal plot
                breath_left--;
            }

            // If breath runs out and Jojo is not on a stair
            if (breath_left < 0)
            {
                can_escape = 0; // Jojo cannot escape
                break;
            }
        }

        // Output the result for the current test case
        if (can_escape)
        {
            printf("Case #%d: Alive\n", case_num);
        }
        else
        {
            printf("Case #%d: Dead\n", case_num);
        }
    }

    return 0;
}