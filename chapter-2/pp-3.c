#include <stdio.h>

#define PI 3.14159265359f

int main(void) {
    
    float radius;
    float volume;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    volume = 4.0 / 3.0 * PI * radius * radius * radius;

    printf("Volume = %.8f\n", volume);

    return 0;
}
