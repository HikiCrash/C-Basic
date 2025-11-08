#include <stdio.h>

int main(){
    char c, *s;
    float x, y, z;
    c = 'a';
    s = "This is";
    x = 1.1;
    y = 2.2;
    z = x + y;
             // %c는 문자 한개, %s는 문자열을 출력한다.
    printf("%s %c %c %s\n", s, c, 'c', "program."); // This is a c program.
    printf("%f + %f = %f", x, y, z);

    return 0;
}