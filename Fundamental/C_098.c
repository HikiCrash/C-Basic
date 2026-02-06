#include <stdio.h>

int main(){
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)20000; // 셋다 20000을 주소 값으로 가짐.
    pi = (int *)20000;
    pd = (double *)20000;

    printf("포인터 연산 전 : pc = %d, pi = %d, pd = %d\n", pc, pi, pd); // 20000, 20000, 20000.

    pc++; // 1바이트 증가.
    pi++; // 4바이트 증가.
    pd++; // 8바이트 증가.

    printf("포인터 연산 후 : pc = %d, pi = %d, pd = %d\n", pc, pi, pd); // 20001, 20004, 20008.

    return 0;
}