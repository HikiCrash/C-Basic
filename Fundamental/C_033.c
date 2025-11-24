#include <stdio.h>

int main(){
    int  a = 30, b = 3, c = 2, d;
    d = c >> 2 <= a && a / (b + 2) == 40; // 계산 순서 - 괄호, 시프트, 비교, 논리.
    // d = 2 >> 2 <= 30 && 30 / 5 == 40, d = 0 <= 30 && 30 / 5 == 40
    // d = 1 && 0, d = 0
    printf("d = %d", d);

    return 0;
}
