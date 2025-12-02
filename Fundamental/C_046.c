#include <stdio.h>

int main(){
    int val, sum = 0;

    printf("여러 개의 숫자 입력(-99는 종료) : ");
    while(1) // 무한루프
    {
        scanf("%d", &val);
        if (val == -99) goto end; // val 값이 -99일 때 end문으로 즉시 이동.
        sum = sum + val;
    }
    end :
        printf("입력한 값의 합 = %d \n", sum);
    
    return 0;
}