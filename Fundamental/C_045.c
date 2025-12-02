#include <stdio.h>

int main(){
    int i, odd = 0;
    for (i = 0; i <= 10; ++i)
    {
        if (i % 2 == 0) continue; // 나머지가 0일 경우 if문 명령은 실행하지 않는다.
        odd = odd + i;
        printf("%d ", i);
    }
    printf("\n홀수의 합 = %d", odd);

    return 0;
}