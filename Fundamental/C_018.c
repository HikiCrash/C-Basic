#include <stdio.h>

int main(){
    char c; int i;

    printf("문자 입력: c값은 ? ");
    scanf("%c", &c);
    printf("정수 입력: i값은 ? ");
    scanf("%d", &i);
    printf("c=%c i=%d", c, i);

    return 0;
}