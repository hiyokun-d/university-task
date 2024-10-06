#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    int N[20]; // Array to store N for each test case (max T = 20 as per constraints)
    
    // We store the results for all cases, in order to wait and print them later.
    int results[20][10001]; // To store the shouting result for each test case (max N = 10,000)
    
    // Step 1: Get all inputs first
    for (int case_num = 1; case_num <= T; case_num++) {
        scanf("%d", &N[case_num - 1]); // Store the N for the current test case

        // Store results for the current case based on the input N
        for (int j = 1; j <= N[case_num - 1]; j++) {
            if ((j % 3 == 0 || j % 5 == 0) && j % 15 != 0) {
                results[case_num - 1][j] = 1; // Jojo's turn
            } else {
                results[case_num - 1][j] = 0; // Lili's turn
            }
        }
    }

    // Step 2: After collecting all inputs, output the results
    for (int case_num = 1; case_num <= T; case_num++) {
        printf("Case #%d:\n", case_num);
        for (int j = 1; j <= N[case_num - 1]; j++) {
            if (results[case_num - 1][j] == 1) {
                printf("%d Jojo\n", j);
            } else {
                printf("%d Lili\n", j);
            }
        }
    }

    return 0;
}