#include <stdio.h>

int main(){
    float a = 5.73;
    short i;
    int k;

    printf("int의 자료형 크기는 = %d 바이트\n", sizeof(int));
    printf("short int의 자료형 크기는 = %d 바이트\n", sizeof(short));
    printf("변수 a의 자료형 크기는 = %d 바이트\n", sizeof(a));

    k = (int)a / 3; // float > int로 강제 형변환, 5 / 3 = 1
    
    printf("k = %d", k);

    return 0;
}