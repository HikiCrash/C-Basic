#include <stdio.h>

int main(){
    int i = 15, j = 7, k = 0; // 2진수는 1111, 0111, 0000
    int w, x, y, z; 
    w = i & j;  // and 연산, 0111 = 7
    x = i | j; // or 연산, 1111 = 15
    y = 12 ^ j; // xor연산, 1011 = 11 
    z = ~ k; // 부정, 1111인데, 2의 보수표현 때문에 -1이 됨.

    printf("w = %d\n", w); // 7
    printf("x = %d\n", x); // 15
    printf("y = %d\n", y); // 11
    printf("z = %d\n", z); // -1

    return 0;
}