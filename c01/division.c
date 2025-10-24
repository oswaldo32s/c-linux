#include <stdio.h>

int main(void){
    int matches;
    int boxes;

    scanf("%d",&matches);
    scanf("%d",&boxes);

    printf("%d\n%d", matches / boxes, matches % boxes);
}
