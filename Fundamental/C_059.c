#include <stdio.h>

int write_address(); // 함수 정의

int main(){
    int i;
    
    for (i = 0; i < 3; ++i)
        write_address(); // 함수 호출
    
    return 0;
}

int write_address(){ // 함수의 내용
    printf("Bucheon, Korea \n");

    return 0;
}