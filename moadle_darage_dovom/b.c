#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

    int a, b, c;
    float x1, x2;
    float delta;

    printf("Please enter a, b and c :");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        printf("wrong equation !");
        exit(0);
    }

    delta = b*b - 4 * a * c;

    if (delta < 0) {
        printf("no answer !");

    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("there is one answer, x1=%4.2f", x1);
        
    } else {
        delta = sqrt(delta);
        x1 = (-b + delta) / (2 * a);
        x2 = (-b - delta) / (2 * a);

        printf("There are two answer, x1=%4.2f and x2=%4.2f", x1, x2);
    }
}