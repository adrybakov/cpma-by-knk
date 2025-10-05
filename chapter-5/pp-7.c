#include <stdio.h>

int main(void){

    int i1, i2, i3, i4, container;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

    if (i1 > i2){
        container = i2;
        i2 = i1;
        i1 = container;
    }

    if (i3 > i4){
        container = i4;
        i4 = i3;
        i3 = container;
    }

    if (i1 < i3)
        printf("Smallest: %d\n", i1);
    else
        printf("Smallest: %d\n", i3);

    if (i2 < i4)
        printf("Largest: %d\n", i4);
    else
        printf("Largest: %d\n", i2);




    return 0;
}
