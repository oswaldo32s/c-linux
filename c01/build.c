#include <stdio.h>

int main(void){

	double cement = 0;
	int bag_size = 120;
	int int_bag_count = 0;
	double bag_count = 0;

	scanf("%lf", &cement);

	bag_count = cement / bag_size;
	int_bag_count = (int) bag_count;

	printf("%d", (int_bag_count + 1) * 45);


	return 0;
}
