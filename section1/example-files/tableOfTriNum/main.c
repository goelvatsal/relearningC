#include <stdio.h>
int main(void) {
    int triNum = 0;

    printf("TABLE OF TRIANGULAR NUMBERS:\n\n");
    printf(" n   Sum from 1 to n\n");
    printf("---  -----------------\n");

    for (int n = 0; n <= 10; n++) {
        triNum += n;
        printf(" %d    %d\n", n, triNum);
    }
}