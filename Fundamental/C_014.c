#include <stdio.h>

int main(){
    int m = 15;

    printf("%d\n", m); // 10진수 출력 - 15
    printf("%o\n", m); // 8진수 출력 - 17
    printf("%4o\n", m); // 8진수 네자리 출력, 앞에 공백 두개 생김. - 17
    printf("%04o\n", m); // 빈자리 0으로 채움 - 0017
    printf("%-4o\n", m); // 왼쪽정렬 - 17
    printf("%04x\n", m); // 16진수 4자리, 빈자리 0으로 채움 - 000f

    return 0;
}