#include <stdio.h>

void order_run() {
    int a, b;

    a = 5;
    b = a++;

    printf("a=%d and b=%d \n", a, b);

    a = 5;
    b = ++a; 

    printf("a=%d and b=%d \n", a, b);
    
}


void main() {

     int a, b, f, g, d, c, e = 5;
     int result = a + b * (f - (g + b));

     order_run();

}