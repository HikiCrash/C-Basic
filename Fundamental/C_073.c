#include <stdio.h>

int i = 10; // 전역
int j = 20; // 전역
int k = 50; // 전역
int sub();

int main(){
    extern int i; // 전역 변수 i 사용.
    int j = 200; // 지역 변수 j를 200으로 설정.

    printf("i = %d, j = %d, k = %d\n", i, j, k); // 10 200 50
    sub(); // k값이 60이 됨.
    k += 5; // 65.
    
    printf("main : k = %d \n", k); // 65.

    return 0;
}

int sub(){
    k = k + 10;
    printf("sub : k = %d \n", k);
    
    return 0;
}