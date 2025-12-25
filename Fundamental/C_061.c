#include <stdio.h>

int spc(int);

int main(){
    int i;

    for ( i = 0; i < 5; i++)
    {
        spc(i); // i개의 공백 출력.
        printf("C Language \n");
    }

    return 0;
}

int spc(int n){
    int i;

    for (i = 0; i < n; i++) // n개의 공백 출력.
        printf(" ");

    return 0;
} // i는 각 함수에서만 쓰는 지역 변수다.  