#include <stdio.h>

int main(){
    char str[20];
    
    printf("문자열 입력: ");
    scanf("%s", str); // ("%s, &str[20]")과 동일.
    printf("scanf()로 입력한 문자열 ==> %s\n", str); // str은 이미 포인터 형식이기 때문에 &을 붙이지 않음.

    return 0;
}