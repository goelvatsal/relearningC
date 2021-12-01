#include <stdio.h>
// #include <stdbool.h>

int main(void) {
    int intVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;

    printf("integerVar == %d.\n", intVar);
    printf("floatingVar == %f.\n", floatingVar);
    printf("doubleVar == %e.\n", doubleVar);
    printf("doubleVar == %g.\n", doubleVar);
    printf("boolVar = %i.\n", boolVar);
}