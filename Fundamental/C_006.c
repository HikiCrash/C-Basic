#include <stdio.h>

int main(){
    int i = 4321;

    printf("변수 i를 변환기호 %%d로 출력: %d \n", i);  // %%: %출력
    printf("변수 i를 변환기호 %%06d로 출력: %06d", i); // %d사이의 숫자는 자릿수 의미, %6d는 0대신 공백이 들어감.

    return 0;
}
