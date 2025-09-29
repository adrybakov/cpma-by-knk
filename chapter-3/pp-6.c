#include <stdio.h>

int main(void){

    int num1, num2, denum1, denum2;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denum1, &num2, &denum2);

    printf("The sum is %d/%d\n", num1 * denum2 + num2 * denum1, denum1 * denum2);

    return 0;
}
