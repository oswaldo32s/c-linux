#include <stdio.h>

int main(void){
	char letter;
	int height = 5;
	int row = 0;

	scanf("%c", &letter);

	for(row = 0; row < height; row++){
		
		int side = height - row - 1;
		int center = 2 * row + 1;

		for(int i = 0; i < side; i++){
			printf("+");
		}
		for(int i = 0; i < center; i++){
			printf("%c", letter);
		}
		for(int i = 0; i < side; i++){
			printf("+");
		}
		printf("\n");
	}
}
