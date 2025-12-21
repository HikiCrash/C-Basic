#include <stdio.h>

int main(){
    int i = 0, sum = 0;

    do // do-while문은 조건과 관계 없이 1번은 무조건 실행된다.
    {
        i++;
        sum += i * i;
    } while (sum <= 1000); // sum이 1000이 넘으면 종료.

    printf("i = %d, sum = %d \n", i, sum);

    return 0;
}