#include <stdio.h>

int main(void){
    int meters = 0;
    int leaf = 0;

    scanf("%d", &meters);
    scanf("%d", &leaf);

    int isTinuviel = meters <= 5 && leaf >= 8;
    int isCalaelen = meters >= 10 && leaf >= 10;
    int isFalarion = meters <= 8 && leaf <= 5;
    int isDorthonion = meters >= 12 && leaf <=7;

    if(isTinuviel){
        printf("Tinuviel");
    } else if(isCalaelen){
        printf("Calaelen");
    } else if(isFalarion){
        printf("Falarion");
    } else if(isDorthonion){
        printf("Dorthonion");
    } else {
        printf("Uncertain");
    }
}
