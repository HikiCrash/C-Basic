#include <stdio.h>

int main(){
    int  a = 123, b = 4;

    printf("%d \n", a);
    printf("%5d \n", a);
    printf("%05d \n", a);
    printf("%-5d %d", a, b);   // 5자리 출력, 왼쪽정렬을 한다.

    return 0;
}