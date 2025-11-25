#include <stdio.h>

int main(){
    int i, j, max, min;

    printf(" 두 개의 수 입력 : ");
    scanf("%d %d", &i, &j);

    if (i >= j){ // 두 개의 수에서 큰 수와 작은 수를 나눔.
        max = i;
        min = j;
    } 
    else {
        max = j;
        min = i;
    }
    printf("max = %d, min = %d", max, min);

    return 0;
}