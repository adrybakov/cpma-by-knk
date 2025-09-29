#include <stdio.h>

int main(void){

    int three_code, three_digits, four_digits;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &three_code, &three_digits, &four_digits);

    printf("You entered %d.%d.%d\n", three_code, three_digits, four_digits);

    return 0;
}
