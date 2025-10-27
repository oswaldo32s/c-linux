#include <stdio.h>

int main(void){
    int grades = 0;
    int total_score = 0;
    double decimal_total_score;

    scanf("%d", &grades);

    for(int i = 0; i < grades; i++){
    	int score = 0;

	scanf("%d",&score);

	total_score = total_score + score;
    }

    decimal_total_score = (double) total_score;

    printf("%.2f", decimal_total_score / grades);
}
