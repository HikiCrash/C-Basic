#include <stdio.h>

int main(){
    char *str = "computer science";

    printf("%s \n", str);
    printf("%17s \n", str); // 17자리 오른쪽 정렬
    printf("%-17s \n", str); // 17자리 왼쪽 정렬
    printf("%017s \n", str); // 17자리 오른쪽 정렬, 문자열은 공백 채우기X %17s와 같음.
    printf("%11.5s \n", str); // 11자리, 5글자 출력, 오른쪽 정렬
    printf("%-11.5s \n", str); // 11자리, 5글자 출력, 왼쪽 정렬

    return 0;
}