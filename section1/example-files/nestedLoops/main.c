#include <stdio.h>
int main(void) {
    int number = 0, triNum = 0;

    for (int counter = 0; counter <= 5; counter++) {
        printf("What triangular number what do you want? ");
        scanf("%d", &number);

        for (int n = 1; n <= number; n++) {
            triNum += n;
        }
        printf("Triangular number %d is %d.\n\n", number, triNum);
    }
}