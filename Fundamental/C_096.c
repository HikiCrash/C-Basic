#include <stdio.h>

int main(){
    int i = 30000;
    int *p, *q;

    p = &i; // i의 주소 값 설정
    q = &i; // i의 주소 값 설정

    *p = *p + 1; // p가 가리키는 값 1 증가.
    *q = *q + 1; // q가 가리키는 값 1 증가.

    printf("i = %d", i); // 30002

    return 0;
}