#include <stdio.h>

int main(){
    int i = 5, j, k, m;
    j = i > 3;
    printf("j = %d\n", j);

    k = i < 2;
    printf("k = %d\n", k);

    m = i == 6;
    printf("m = %d\n", m);
    // 관계가 참이면 1, 거짓이면 0을 값에 저장한다.
    return 0;
}