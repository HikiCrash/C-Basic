#include <stdio.h>

int main(){
    char c[6]; // 6개 공간의 배열
    int i;
    c[0] = 'K';
    c[1] = 'O';
    c[2] = 'R';
    c[3] = 'E';
    c[4] = 'A';
    c[5] = '\0'; // null 문자로 문자열의 끝을 알림.

    for (i = 0; i < 5; i++)
        printf("%c", c[i]); // 문자열을 하나씩 출력.
    
    printf("\n"); // %c는 문자열 하나, %s는 null문자를 만나기 전까지 출력.
    printf("%s\n", c); // 전체 문자열을 출력.

    return 0;
}