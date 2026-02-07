#include <stdio.h>

int main(){
    char *str;
    str = "KOREA"; // 문자열 맨 뒤에는 항상 null문자가 존재.

    while (*str != '\0') // null문자가 나올 때까지 반복.
    {
        printf("%c\n", *str);

        str++; // 다음 문자 주소로 포인터 이동.
    }
    
    return 0;
}