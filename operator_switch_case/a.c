#include <stdio.h>

void main() {

    int number1, number2, result;
    char operator;

    printf("please enter number1 operator number2 :");
    scanf("%d %c %d", &number1, &operator, &number2);

    result = 0;

    switch (operator) {
    case '+' :
        result = number1 + number2;
        break;
    case '-' :
        result = number1 - number2;
        break;
    case '*' : 
        result = number1 * number2;
        break;
    case '/' : 
        if (number2 != 0) result  = number1 / number2;
        else printf("there is no answer !");
        break;
    case '%' : 
        if (number2 != 0) result = number1 % number2;
        else printf("there is no answer !");
        break;                  
    default:
        printf("invalid operator ! \n");
        break;
    }

    printf("result=%d", result);
}