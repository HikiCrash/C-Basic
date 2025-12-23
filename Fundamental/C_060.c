#include <stdio.h>

int all_add(int, int, int, double, double, double); // 함수 선언과 변수 형식 지정.

int main(){
    int l = 1, m = 2, n = 3;
    double s = 1.1, t = 2.2, u = 3.3;

    all_add(l, m, n, s, t, u); // 함수 호출.

    return 0;
}

int all_add(int a, int b, int c, double x, double y, double z){
    int i = 0, j = 0, k = 0;
    double sum;

    sum = a + b + c + i + j + k + x + y + z;
    printf("%f\n", sum); // double을 출력하기 위해 %f를 사용.

    return 0;
}
