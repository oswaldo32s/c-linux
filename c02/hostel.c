#include <stdio.h>

int main(void){
    int arrival = 0;
    int late_fee = 5;
    int total = 10;
    int total_fee = 0;

    scanf("%d",&arrival);

    if(arrival == 0){
        printf("%d", total);
    } else {
        total_fee = arrival * late_fee;
        if(total_fee + total > 53){
            printf("53");
        } else {
            printf("%d", total_fee + total);
        }
    }

    return 0;
}
