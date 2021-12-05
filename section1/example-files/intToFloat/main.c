#include <stdio.h>
int main(void) {
    float f1 = 123.125, f2;
    int i1, i2 = -150;
    char c = 'a';

    i1 = f1; // floating to integer conversion
    f1 = i2; // integer to floating conversion
    f1 = i2 / 100; // integer divided by integer
    f2 = i2 / 100.0; // integer divided by a float
    f2 = (float) i2 / 100; // type cast operator

}