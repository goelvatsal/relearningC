#include <stdio.h>
#include <math.h>

int main(void) {
    float f = (3.31 * pow(10, -8) * 2.01 * pow(10, -7)) / (7.16 * pow(10, -6) + 2.01 * pow(10, -8));

    printf("(3.31 * 10 ^ -8 * 2.01 * 10 ^ -7) / (7.16 * 10 ^ -6 + 2.01 * 10 ^ -8) = %e.\n", f);
}