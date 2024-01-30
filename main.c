#include <stdio.h>
#ifndef M_PI
#    define M_PI 3.14159265358979323846
#endif

int main(void){
    float v = 0.00f;
    int r = 0;

    printf("Enter the radius of a sphere: ");
    scanf("%d", &r);

    v = (4.0f/ 3.0f) * M_PI * (r * r * r);

    printf("Volume of a sphere with a radius of %d: %f\n", r, v);

    return 0;
}