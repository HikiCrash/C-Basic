#include <stdio.h>

int max(int, int, int *);

int main(){
    int x = 30, y = 40, v = 0;

    max(x, y, &v); // v의 주소값을 보냄.

    printf("v = %d\n", v); // 40.

    return 0;
}

int max(int a, int b, int *m_ptr){
    *m_ptr = (a > b) ? a : b; // 조건 ? 1 : 2 >> 조건이 참이면 1, 아니면 2를 작동.

    return 0;
}