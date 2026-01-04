#include <stdio.h>

int sub1(), sub2();

int main(){
    int i;
    
    for (i = 0; i < 3; i++){ // 3번 실행.
        sub1();
        sub2();
    }

    return 0;
}

int sub1(){
    static int a = 1; // 최초 1회 실행.
    a = a + 1; // 프로그램 종료까지 남아있음.

    printf("sub1 : static a = %d \n", a);

    return 0;
}

int sub2(){
    int a = 1; // 함수 실행시 항상 실행.
    a = a + 1; // 함수 종료 시 초기화.

    printf("sub2 : auto a = %d \n", a);

    return 0;
}