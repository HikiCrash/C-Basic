#include <stdio.h>

#define MAX 1000 // 매크로 상수 MAX를 1000으로 정의

int main(){
    #if MAX > 999 // 전처리기 조건문 MAX가 999보다 크면 아래 컴파일.
        printf("compiled for array greater than 999\n"); // 참일 때 실행.
    #endif // 조건문 종료.
    
    return 0;
}