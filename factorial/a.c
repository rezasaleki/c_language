#include <stdio.h>

void main() {

    int i, number;
    long int factorial;

    printf("Please enter number :");
    scanf("%d", &number);

    factorial = 1;
    i = 1;

    while (i <= number) {
        factorial *= i;
        i++;
    }

    printf("factorial of %d is %ld", number, factorial);   
}