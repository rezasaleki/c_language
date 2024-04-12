#include <stdio.h>

void main() {

    int age;
    float average;

    printf("Please enter your age and average :");
    scanf("%d %f", &age, &average);
    printf("Your are %d years old and your average is %5.2f \n", age, average);
}