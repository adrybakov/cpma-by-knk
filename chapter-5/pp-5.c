#include <stdio.h>

int main(void){

    float income, tax_due;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income < 750.00f)
        tax_due = income * .01f;
    else if (income < 2250.00f)
        tax_due = 7.50f + .02f * (income - 750.00f);
    else if (income < 3750.00f)
        tax_due = 37.50f + .03f * (income - 2250.00f);
    else if (income < 5250.00f)
        tax_due = 82.50f + .04f * (income - 3750.00f);
    else if (income < 7000.00f)
        tax_due = 142.50f + .05f * (income - 5250.00f);
    else 
        tax_due = 230.00f + .06f * (income - 7000.00f);

    printf("Tax due: $%.2f\n", tax_due);

    return 0;
}
