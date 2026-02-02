#include <stdio.h> // c_094.c를 수정한 코드.

int swap(int *, int *);

int main(){
    int a = 100, b = 200;

    printf("교환 전 : a = %d, b = %d\n", a, b); // 100, 200

    swap(&a, &b); // 함수에 주소 값을 전달.

    printf("교환 후 : a = %d, b = %d", a, b); // 200, 100

    return 0;
}

int swap(int *x, int *y){
    int temp;
    temp = *x; // *x와 *y의 값을 서로 변경.
    *x = *y; // *y값을 *x로 복사.
    *y = temp; // 백업한 *x값 *y로 복사.

    return 0; // main의 a, b값이 변함.
}