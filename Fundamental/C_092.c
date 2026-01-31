#include <stdio.h> // c_091.c에서 c값을 변환시킬 수 있는 코드.

int plus(int, int, int *);

int main(){
    int a = 10, b = 20, c = 0;

    plus(a, b, &c); // c의 주소를 보냄.

    printf("c = %d \n", c);

    return 0;
}

int plus(int s1, int s2, int *p){
    *p = s1 + s2; // p가 가르키는 c에 값 저장.

    return 0;
}