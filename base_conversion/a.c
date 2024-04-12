#include <stdio.h>

void main() {

    int number, base, remain;
    long int result = 0L, power = 1L;
    int temp;

    printf("enter number");
    scanf("%d", &number);
    printf("enter new base");
    scanf("%d", &base);

    if (base == 1) {
        printf("no anwser !");
        return;
    }

    temp = number;

    while (temp > 0) {
        remain = temp % base;
        temp /= base;
        result = result + remain * power;
        power *= 10;    
    }
    
    printf("%d in base %d equals %ld", number, base, result);
}