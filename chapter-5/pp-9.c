#include <stdio.h>

#define true 1
#define false 0
#define bool int


int main(void){

    int day1, day2, month1, month2, year1, year2;
    bool first_date_earlier, same_date;

    printf("Enter first date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day1, &month1, &year1);
    printf("Enter second date (dd/mm/yy): ");
    scanf("%d/%d/%d", &day2, &month2, &year2);

    same_date = false;
    first_date_earlier = false;


    if (year1 < year2)
        first_date_earlier = true;
    else if (year2 < year1)
        first_date_earlier = false;
    else if (month1 < month2)
        first_date_earlier = true;
    else if (month2 < month1)
        first_date_earlier = false;
    else if (day1 < day2)
        first_date_earlier = true;
    else if (day2 < day1)
        first_date_earlier = false;
    else
        same_date = true;

    printf("first_date_earlier = %d\n", first_date_earlier);
    printf("same_date = %d\n", same_date);

    if (same_date)
        printf("Same date\n");
    else if (first_date_earlier)
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", day1, month1, year1, day2, month2, year2);
    else
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", day2, month2, year2, day1, month1, year1);

    return 0;
}
