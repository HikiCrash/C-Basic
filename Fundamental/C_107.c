#include <stdio.h>

char *func();

int main(){
    printf("%s", func()); // func가 반환한 문자열 출력.

    return 0;
}

char *func(){
    char *p = "Dept. of Computer Science";

    return (p); // 문자열 주소를 반환.
}