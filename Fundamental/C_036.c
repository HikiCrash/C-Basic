#include <stdio.h>

int main(){
    int i, j, max;

    printf("두 개의 수 입력 : ");
    scanf("%d %d", &i, &j);

    if(i >= j) // 두 개의 수의 값을 비교해서 더 큰 수를 출력.
        max = i;
    else
        max = j;
    
    printf("max = %d", max);

    return 0;
}
