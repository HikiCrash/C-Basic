#include <stdio.h>

// 문자 앞에 ++은 1을 더하고 값을 반환, 뒤 ++은 값을 반환 후 1을 더함.
int main(){
    int i, j, x = 5, y = 10;
    i = 20 / ++x;
    j = y++ * 8;

    printf("i = %d  j = %d  x = %d  y = %d",i, j, x, y);

    return 0;
}