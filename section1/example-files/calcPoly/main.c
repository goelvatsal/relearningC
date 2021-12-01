#include <stdio.h>
#include <math.h>

int main(void) {
    // declare x
    float x = 2.55;
    float b = pow(3 * x, 3) - pow(5 * x, 2) + 6; 

    // float f = (49.744125 - 32.5125 + 6);
   
    printf("3x^3 - 5x^2 + 6 = %f.\n", b);
}