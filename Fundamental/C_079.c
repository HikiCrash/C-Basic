#include <stdio.h>

int main(){
    int a[10];
    int i;

    for (i = 0; i < 10; i++) // 인덱스 0 ~ 9까지 호출.
        a[i] = i * 10;
    
    printf("********************\n");
    printf("  인덱스   값  \n");
    printf("********************\n");

    for (i = 0; i < 10; i++)
        printf("%5d   %5d\n", i, a[i]); // 인덱스 번호와 값 출력.

    return 0;
}