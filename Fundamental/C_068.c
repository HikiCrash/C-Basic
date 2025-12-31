#include <stdio.h>

int count();

int main(){
    int c;
    
    while ((c = getchar()) !=  EOF) // 입력을 한 글자씩 읽음, crtl + z로 종료.
    if ( '0' <= c && c <= '9') // 입력된 숫자가 0~9인지 확인.
        count();   
    
    return 0;
}

int count(){
    static int num = 0; // static은 함수가 끝나도 값이 사라지지 않고 프로그램이 끝날 때까지 유지.

    printf("numeric = %d \n", ++num);

    return 0;
}   