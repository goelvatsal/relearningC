#include <stdio.h>
int main(void) {
    // Illustrate the use of various arithmetic operators

    int a = 100, b = 2, c = 25, d = 4;
    int result;

    result = a - b; // subtraction
    printf("a - b = %d.\n", result);

    result = b * c; // multiplication
    printf("b * c = %d.\n", result);

    result = a / c; // division
    printf("a / c = %d.\n", result);

    result = a + b * c; //precendence
    printf("a + b * c = %d.\n", result);

    printf("a * b + c * d = %d.\n", a * b + c * d);

    return 0;
}