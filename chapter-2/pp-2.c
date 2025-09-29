#include <stdio.h>

#define RADIUS 10.0f
#define PI 3.14159265359f

int main(void) {
    
    float volume;
    float volume_approx;

    volume = 4.0 / 3.0 * PI * RADIUS * RADIUS * RADIUS;
    volume_approx = 4 / 3 * PI * RADIUS * RADIUS * RADIUS;

    printf("Volume = %.8f\n", volume);
    printf("Approximate volume = %.8f", volume_approx);

    return 0;
}
