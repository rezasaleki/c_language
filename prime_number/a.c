#include <stdio.h>
#include <math.h>

void main() {

    int i = 2;
    int primeSW = 1;
    int number, root;

    printf("Please enter number :");
    scanf("%d", & number);

    root = (int) sqrt(number);

    while (i <= root && primeSW == 1) {
        if (number % i == 0) {
            primeSW = 0;
        }
        i++;
    }

    if (primeSW == 1) {
        printf("%d is a prime number", number);   
    } else printf("%d is not a prime number", number);
}