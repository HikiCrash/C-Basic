#include <stdio.h>

#define MAX 10

int main(){
    #if MAX > 99 
        printf("compiled for array greater than 99\n"); // 참이면 출력.
    #else
        printf("compiled for small array\n"); // 거짓이면 출력.
    #endif // 전처리기 조건문은 해당 코드가 꼭 필요.
    
    return 0;
}