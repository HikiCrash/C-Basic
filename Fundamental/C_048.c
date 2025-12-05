#include <stdio.h>
// C_047.c와 같은 실행결과를 while문으로만 바꿈.
int main(){
    int i, n, sum = 0;

    printf("정수 N 입력 : ");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("1부터 %d까지의 합 = %d\n", n, sum);

    return 0;
}