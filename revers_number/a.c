#include <stdio.h>
#include <math.h>

void main() {

    int number, reverse, temp, remain;

    printf("Please enter number :");
    scanf("%d", &number); // 151

    if (number < 0) temp -= number;
    else temp = number;

    reverse = 0;

    while (temp > 0) {
        remain = temp % 10; // 1
        temp /= 10; // 15
        reverse = reverse * 10 + remain; // 1
    }

    if (number < 0) {
        reverse = - reverse;
    }

    printf("number=%d and its reverse=%d", number, reverse);    
}