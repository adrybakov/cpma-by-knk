#include <stdio.h>

int main(void){
    float tax_free_price;

    printf("Enter a price: ");
    scanf("%f", &tax_free_price);

    printf("Price with tax: $%.2f\n", tax_free_price * 1.05);

    return 0;
}
