#include <stdio.h>

int main (void) {
    int number = 0, triNum = 0;
    
    printf("What triangular number do you want?\n");
    scanf("%d", &number);

    triNum = 0;
    for(int n = 1; n <= number; n++) {
        triNum += n;
    }

    printf("The triangular number %d is %d.\n", number, triNum);
}