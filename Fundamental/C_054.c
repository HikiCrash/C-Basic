#include <stdio.h>

int main(){
    long fact = 1; // long은 int보다 많은 데이터를 저장할 수 있음
    int i, n; // int는 +-21억까지 저장

    printf("정수 입력 : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        fact = fact * i;

    printf("%d!는 %d\n", n, fact);

    return 0;
}