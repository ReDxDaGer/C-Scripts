#include <stdio.h>
#include <math.h>

int main(void) {
    int num1;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("sqrt(%d) is %f\n", num1, sqrt(num1));

    return 0;
}

