#include <stdio.h>
#include <values.h>

void main() {

    int i, n, number, sum, max, min;
    float average;

    printf("please enter n :");
    scanf("%d", &n);

    sum = 0;
    min = MAXINT;
    max = MININT;

    for (i = 1; i <= n; i++) {
        printf("please enter number :");
        scanf("%d", &number);

        sum += number;

        if (number > max) {
            max = number;
        } 
        if (number < min) {
            min = number;
        }
    }

    average = (float)sum / (float)n;
    printf("average=%f, Maximum=%d, Minimum=%d", average, max, min);
}