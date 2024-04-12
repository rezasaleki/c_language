#include <stdio.h>

void main() {
    
    int a, b, c;
    int max;

    printf(" Please enter 3 number :");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) 
        if (a > c)
            max = a;
        else max = c;    
    else if (b > c) max = b;
    else max = c;

    printf("maximum is %d, ", max);
}