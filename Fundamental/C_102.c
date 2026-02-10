#include <stdio.h>

int main(){
    char *p;
    p = "Computer Science";

    printf("%s\n", p); // 전체 문자열 출력.
    printf("%s\n", (p+5)); // 다섯번째 글자부터 출력.
    printf("%c\n", *(p+5)); // 다섯번째 글자만 출력.

    while (*p != '\0')
    {
        printf("%c", *p); // 현재 문자 출력.

        p++; // 다음 주소값을 이동.
    }
    
    return 0;
}