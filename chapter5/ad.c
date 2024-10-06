#include <stdio.h>

int main() {
    int N, i;
    int item_types[1001] = {0};
    int max_frequency = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        int item_type;

        //? ngebaca input user dan nyimpen itu ke item_type
        scanf("%d", &item_type);
        //? ngitung jumlah datanya
        item_types[item_type]++;
        
        //? pengecekan lah yah
        if (item_types[item_type] > max_frequency) {
            //? update max_frequencynya kalo memenuhi syarat aja kalo nggak mah tinggalin
            max_frequency = item_types[item_type];
        }
    }

    printf("%d\n", max_frequency);

    return 0;
}