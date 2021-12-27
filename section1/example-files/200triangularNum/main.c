#include <stdio.h>

int main(void) {
    int triNum = 0;

    for (int i = 0; i <= 200; i++) {
        triNum = triNum + i;
    }

    printf("The 200th Triangular Number is %d.\n", triNum);
}