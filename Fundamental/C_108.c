#include <stdio.h>

int add(int, int), sub(int, int);
int (*pf)(int, int); // 두 int 인수를 받고 반환하는 포인터 선언.

int main(){
    int a = 30, b = 10;


    pf = add; // pf에 add 함수 저장.
    printf("a + b = %d \n", (*pf)(a, b)); // 40.

    pf = sub; // pf에 sub 함수
    printf("a - b = %d \n", (*pf)(a, b)); // 20.

    return 0;
}


int add(int x, int y)
{
    return (x + y); // x y 합 반환.
}


int sub(int x, int y)
{
    return (x - y); // x y 차 반환.
}