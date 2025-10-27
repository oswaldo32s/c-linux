#include <stdio.h>

int main(void){

	double money = 0;
	double books = 0;
	int capacity = 0;

	scanf("%lf", &money);
	scanf("%lf", &books);

	capacity = (int) money / books;

	printf("%d", capacity);
	return 0;
}
