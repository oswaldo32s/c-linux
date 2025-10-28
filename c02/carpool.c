#include <stdio.h>

int main(void){
    int passengers = 0;
    double cost = 0;
    double shared_cost = 0;
    double fee = 1.0;

    scanf("%d %lf", &passengers, &cost);
    
    if(passengers == 0){
        printf("%.2f", cost);
    } else {
        shared_cost = (cost + fee) / (passengers + 1.0);
        printf("%.2f", shared_cost);
    }
}
