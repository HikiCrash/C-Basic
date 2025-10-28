#include <stdio.h>

int main(){
    float x, y, z;
    x = 123.4;
    y = 888.8;
    z = x + y;
                   
    printf("x + y = %.1f", z);
           // %f 사이 숫자는 출력할 소숫점 자리수다.
    return 0;
}