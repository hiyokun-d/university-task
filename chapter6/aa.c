#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    
    long long a[n];
    int result = 0;

    for(int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);

        int checkUnique = 1; // BOOLEAN BUT IN INT

        for(int j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                checkUnique = 0;
                break;
            }
        }

        if(checkUnique) result++;
    }

    printf("%d\n", result);
    
    return 0;
}