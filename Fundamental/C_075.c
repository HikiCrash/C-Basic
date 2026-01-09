#include <stdio.h>

int main(){
    register int i; // 레지스터는 전역 변수 사용불가, 주소 연산 불가.
    int sum = 0;

    for (i = 1; i <= 10; ++i)
        sum += i;

    i -= 1; // for문 끝나고 i값이 11이므로 10으로 맞춤.

    printf("1부터 %d까지의 합 : sum = %d", i, sum);

    return 0;
}