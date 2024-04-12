#include <stdio.h>

void main() {

    int number, sum, i;

    sum = 0;

    for (i = 1; i <= 100; i++) {
        printf("please enter number :");
        scanf("%d", &number);
        if (number < 0) break; // continue;
        sum += number;
    }

    printf("sum=%d", sum);
}