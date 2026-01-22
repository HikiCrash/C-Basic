#include <stdio.h>

int main(){
    static int x[3] = {10, 20, 30}; // 값 유지, 정적 배열.
    static int y[3] = {15, 25, 35};
    int i, z[3];

    for (i = 0; i < 3; i++)
        z[i] = x[i] + y[2-i];
    
    printf("두 배열의 반대 위치 원소의 합 \n");

    for (i = 0; i < 3; ++i) // for문에서 i++과 ++i는 차이가 없음. 
        printf("  %d + %d = %d \n", x[i], y[2-i], z[i]);
    
    return 0;
}