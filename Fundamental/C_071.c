#include <stdio.h>

int main(){
    int  a = 10, b = 50;
    {
        int a = 20;
        static int b = 30;

        printf("a = %d b = %d\n", a, b); // 20, 30 블록 안에서 설정된 값.
    }
    printf("a = %d b = %d\n", a, b); // 10, 50 

    return 0;
}