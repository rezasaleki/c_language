#include <stdio.h>

void main() {
    
    char ch;

    ch = getchar();

    while (ch != 13) {
        if (ch >= 'a' && ch <= 'z') {
            ch -= 32;
        }
        putchar(ch);
        ch = getchar();
    }
    
}