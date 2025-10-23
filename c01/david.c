#include <stdio.h>

int main(void){
	int i = 0;
	int repetition = 0;
	int engineP = 0;
	int resistance = 0;
	int weight = 0;
	int height = 0;
	int score = 0;

	scanf("%d\n",&repetition);

	for(i = 0; i < repetition; i++){
		scanf("%d%d%d%d", &height, &weight, &engineP, &resistance);
		score = score + (engineP + resistance) * (weight - height);
	}

	printf("%d",score);
}
