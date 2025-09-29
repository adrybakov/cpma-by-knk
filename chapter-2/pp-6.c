#include <stdio.h>

int main(void){
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    printf("Value of a polynomial (old method): %.8f\n", 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6.0);
    printf("Value of a polynomial (new method): %.8f\n", ((((3*x+2)*x - 5)*x - 1)*x + 7)*x - 6);
}
