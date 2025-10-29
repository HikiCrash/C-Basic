#include <stdio.h>

int main(){
    float a = 12.3456;
    
    printf("%g\n", a); // %g는 %f와 %e 중 더 간단한 형태로 자동변환, 12.3456
    printf("%f\n", a); // 12.345600

    return 0;
}