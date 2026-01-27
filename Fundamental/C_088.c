#include <stdio.h>

int sum(int v[][5]); // 행, 열 2차원 배열, 열 크기는 5로 고정.

int main(){
    int a[3][5] = {{1, 2, 3, 4, 5},
                  {6, 7, 8, 9, 10},
                  {11, 12, 13, 14, 15}};
    
    printf("2차원 배열 원소의 합은  %d \n", sum(a)); // a를 sum 함수로 전달 후 출력.

    return 0;
}

int sum(int v[][5]){
    int i, j, s = 0;
    
    for (i = 0; i < 3; i++) // 행 반복.
        for (j = 0; j < 5; j++) // 열 반복.
            s+= v[i][j]; // 각 요소를 합산.
    
    return s; // 더한 값 반환.
}