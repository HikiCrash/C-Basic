#include <stdio.h>

int a; // 전역 변수
int sub();

int main(){
    int i;
    i = a = 1; 

    printf("main : a = %d, i = %d \n", a, i); // 1, 1

    sub(); 

    printf("main : a = %d, i = %d \n", a, i); // 2, 1 a는 전역 변수라서, sub에서 바뀐 값이 유지.

    return 0;
}

int sub(){
    int i;
    i = a = 2;

    printf("sub : a = %d, i = %d \n", a, i); // 2, 2

    return 0;
}