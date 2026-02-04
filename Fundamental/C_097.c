#include <stdio.h>

int main(){
    char c = 'D';
    int i = 30000;
    double d = 5.678;

    char *pc = &c; // c의 주소 값 저장.
    int *pi = &i; // i의 주소 값 저장.
    double *pd = &d; // d의 주소 값 저장.

    (*pc)++;
    *pi = *pi + 4;
    *pd += 2;

    printf("c = %c\n", c); // E(아스키코드가 증가.)
    printf("i = %d\n", i); // 30004
    printf("d = %.3f", d); // 7.678

    return 0;
}