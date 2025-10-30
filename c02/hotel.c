#include <stdio.h>

int main(void){
    int age = 0;
    int luggage = 0;

    scanf("%d", &age);
    scanf("%d", &luggage);

    if(age == 60){
        printf("0");
    } else if(age < 10){
        printf("5");
    } else if(luggage > 20) {
        printf("40");
    } else {
        printf("30");
    }
}
