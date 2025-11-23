#include <stdio.h>

int main(){
    short int i = 32767, j = -5, k, m; // short int는 -32768 ~ 32767 범위의 정수 값을 갖는 자료형
    k = i << 1; // 비트를 왼쪽으로 1칸 밀어서 값이 두배가 되어야 하지만, 오버플로우로 -2가 됨.
    m = j >> 3; // 비트를 오른쪽으로 3칸 밀어서 -1을 출력함.

    printf(" k = %d m = %d", k, m);

    return 0;
}