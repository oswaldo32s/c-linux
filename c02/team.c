#include <stdio.h>

int main(void){
    int team1 = 0;
    int team2 = 0;
    int team_size = 0;
    int turn = 1; // 1 true 0 false
    int i = 0;
    int loop = 0;
    int weight = 0;

    scanf("%d", &team_size);

    loop = team_size * 2;

    for(i = 0; i < loop; i++){
        if(turn == 1) {
            scanf("%d", &weight);
            team1 = team1 + weight;
            turn = 0;
        } else {
            scanf("%d", &weight);
            team2 = team2 + weight;
            turn = 1;
        }
    }

    if(team1 > team2){
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n", team1);
        printf("Total weight for team 2: %d\n", team2);
    } else {
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n", team1);
        printf("Total weight for team 2: %d\n", team2);
    }
}
