#include <stdio.h>

int max(int, int);

int main(){
    int x, y;

    printf("data : ");
    scanf("%d %d", &x, &y); // 2개의 정수를 입력 받음.
    printf("max = %d \n", max(x, y)); // 반환 받은 m값을 출력.

    return 0;
}

int max(int a, int b){ 
    int m;
    
    if (a > b)
        m = a;
    else
        m = b;

    return (m); // 2개의 정수 중 큰 값을 반환.
}