#include <stdio.h>

int main(void){

    int amount_to_pay;
    int n_bills;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount_to_pay);

    n_bills = amount_to_pay / 20;
    amount_to_pay = amount_to_pay - n_bills * 20;
    printf("$20 bills: %d\n", n_bills);

    n_bills = amount_to_pay / 10;
    amount_to_pay = amount_to_pay - n_bills * 10;
    printf("$10 bills: %d\n", n_bills);

    n_bills = amount_to_pay / 5;
    amount_to_pay = amount_to_pay - n_bills * 5;
    printf("$5 bills: %d\n", n_bills);

    printf("$1 bills: %d\n", amount_to_pay);

    return 0;
}
