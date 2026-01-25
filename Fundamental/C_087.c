#include <stdio.h>
#define M 5 // 행
#define N 8 // 열

int set_a(int b[M][N], int);

int main(){
    int a[M][N], j, k;

    set_a(a, 3);

    for(j = 0; j < M; j++) // 행 순회.
    {
        for(k = 0; k < N; k++) // 열 순회.
            printf("%2d", a[j][k]); // 배열 요소 출력.
        printf("\n"); // 행마다 줄 바꿈.
    }
    return 0;
}

int set_a(int b[M][N], int data){
    int j, k;
    
    for (j = 0; j < M; j++) // 행 순회.
        for(k = 0; k < N; k++) // 열 순회.
            b[j][k] = data; // 배열의 요소를 data 값으로 전부 바꿈.

    return 0;
}