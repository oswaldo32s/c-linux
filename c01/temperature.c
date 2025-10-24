#include <stdio.h>

int main(void){
    double c;
    scanf("%lf", &c);                   // Use %lf for double input
    printf("%.1f\n", c * 9.0 / 5.0 + 32.0);  // %f is enough for double
    return 0;
}

