#include <stdio.h>

int main(void){

    int item_number, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%-d\t$%7.2f\t%2.2d/%2.2d/%4.4d\n\n\n", item_number, unit_price, day, month, year);
    printf("Item     Unit         Purchase\n         Price        Date\n");
    printf("%-4d     $%7.2f     %2.2d/%2.2d/%4.4d\n", item_number, unit_price, day, month, year);

    return 0;
}
