#include <stdio.h>

// C_065.c의 코드를 함수 정의 없이 사용하는 방법.

int sum(int n){
    int i;
    int result = 0;

    for (i = 1; i <= n; i++)
        result += i;

    return result;
}

int main(){
    int k, hap;

    printf("정수 입력: ");
    scanf("%d", &k);

    hap = sum(k);

    printf("1부터 %d까지의 합은 %d입니다. \n", k, hap);

    return 0;
}