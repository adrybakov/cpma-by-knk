#include <stdio.h>

int main(void){

    int i, j;

    printf("Enter i and j: ");
    scanf("%d %d", &i, &j);

    printf("%d\n", -(i < j) + (i > j));

    return 0;
}
