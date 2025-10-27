#include <stdio.h>

int main(void){
    int population  = 0;
    double growth = 0;
    int total_population;

    scanf("%d", &population);
    scanf("%lf", &growth);    

    total_population = (int) population * ((growth / 100) + 1);

    printf("%d", total_population);
}

