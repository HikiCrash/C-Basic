#include <stdio.h>

int main(){
    char a, b, c;
    a = 'k';
    b = 'b';
    c = 's';

    printf("%c \n", a);
    printf("%c%c%c \n", a, b, c);
    printf("%3c%3c%3c \n", a, b, c);
    printf("%-3c%-3c%-3c \n", a, b, c);
    printf("%03c%03c%03c", a, b, c); // 문자는 공백을 0으로 채우는 기능을 하지 않는다. 내부적으로 %3c와 같음.

    return 0; 
}