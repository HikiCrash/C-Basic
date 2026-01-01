#include <stdio.h>
#include <math.h>

int main(){
    int i;
    double x, h;

    printf("시작값(x)와 변위(h)를 입력 : ");
    scanf("%lf %lf", &x, &h); // %lf는 double값을 받는 형식.
    printf("\n          ::::  삼각함수 표  ::::\n");
    printf("---------------------------------------------\n");
    printf("         x     sin(x)     cos(x)     tan(x)  \n");
    printf("---------------------------------------------\n");
    
    for (i = 0; i < 10; i++){ // 10번 반복. %g는 자동 선택 형식, 0은 전부 제거함.
        printf("%10g %10g %10g %10g \n", x, sin(x), cos(x), tan(x));

        x = x + h;
    }

    return 0;
}