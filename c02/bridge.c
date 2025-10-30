#include <stdio.h>

int main(void) {
    int first = 0;
    int second = 0;

    scanf("%d", &first);
    scanf("%d", &second);

    if (first + second >= 10){
        printf("Special tax\n%d", 36);
    } else {
        printf("Regular tax\n%d", (first + second) * 2);
    }
}
