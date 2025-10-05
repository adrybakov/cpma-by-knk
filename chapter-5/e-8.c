#include <stdio.h>


int main(void){

    int age, teenager;

    printf("Enter age: ");
    scanf("%d", &age);

    teenager = (age >= 13) && (age <= 19);

    printf("teenager = %d\n", teenager);
        


    return 0;
}
