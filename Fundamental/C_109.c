#include <stdio.h>

int add(int, int), sub(int, int);
int mul(int, int), div(int, int);

int main(){
    int a = 30, b = 10;

    int (*pf[4])(int, int) = {add, sub, mul, div}; // 포인터 배열.

    printf("a + b = %d\n", (*pf[0])(a, b)); // add 함수 호출.

    printf("a - b = %d\n", (*pf[1])(a, b)); // sub 함수 호출.

    return 0;
}


int add(int x, int y)
{
    return (x + y);
}


int sub(int x, int y)
{
    return (x - y);
}


int mul(int x, int y)
{
    return (x * y);
}


int div(int x, int y)
{
    return (x / y);
}