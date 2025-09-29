#include <stdio.h>


int main(void){

    float remaining_balance;
    float interest_rate;
    float monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &remaining_balance);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    // After first month
    remaining_balance = remaining_balance* (1.0 + interest_rate / 1200.0) - monthly_payment;
    printf("Balance remaining after first payment (v2): $%.2f\n", remaining_balance);

    // After second month
    remaining_balance = remaining_balance* (1.0 + interest_rate / 1200.0) - monthly_payment;
    printf("Balance remaining after second payment (v2): $%.2f\n", remaining_balance);

    // After third month
    remaining_balance = remaining_balance* (1.0 + interest_rate / 1200.0) - monthly_payment;
    printf("Balance remaining after third payment (v2): $%.2f\n", remaining_balance);

    return 0;
}

