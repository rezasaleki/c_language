#include <stdio.h>


long int factorial(int n) {
    int i;
    long int f = 1L;

    for (i = 1; i <= n; i++)
        f *= i;
    
    return (f);
}

void main() {
    int n, k;
    long int result;

    printf("please enter n and k ?");
    scanf("%d %d", &n , &k);
    result = factorial(n) / (factorial(k) * factorial(n -k));
    printf("result=%ld", result);
}