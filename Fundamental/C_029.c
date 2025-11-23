#include <stdio.h>

int main(){
    int a = 10, b = 0;
    b = (a > 20) ? (a + 1) : (a - 1);
    // (조건) ? (참일 때) : (거짓일 때) 거짓이므로 10 - 1 = 9
    printf("b = %d", b);

    return 0;
}