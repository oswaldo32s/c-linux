#include <stdio.h>

int main(void){
    int measures[10];
    int swap = 0;
    int index = 0;
    int selected_index = 0;

    for(index = 0; index < 10; index++){
        scanf("%d", &swap);
        measures[index] = swap;
    }

    scanf("%d", &selected_index);
    printf("%d", measures[selected_index]);
    
}
