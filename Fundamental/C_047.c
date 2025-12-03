#include <stdio.h>

int main(){
    int i, n, sum;

    printf("정수 N 입력 : ");
    scanf("%d", &n);

    sum = 0;

    for (i = 1; i <= n; i++)
        sum = sum + i;
    
    printf("1부터 %d까지의 합 = %d \n", n, sum);

    return 0;
}