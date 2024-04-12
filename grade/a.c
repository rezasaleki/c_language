#include <stdio.h>

void main() {

    int aCount,
        bCount,
        cCount,
        dCount,
        n = 0;

    char grade;    

    do {
        printf("\n enter grade (Q for Quit) : ");
        grade = getchar();
        putchar(grade);

        n++;
        
        if (grade == 'A') aCount++;
        else if (grade == 'B') bCount++;
        else if (grade == 'C') cCount++;
        else if (grade == 'D') dCount++;
        else if (grade == 'Q') n--;
        else {
            printf("wrong grade, try again. \n");
            n--;
        }

    } while  (grade != 'Q');

    printf("\n Statistics : \n");
    printf("Grade A : %5.2f percent \n", (float)aCount);
}