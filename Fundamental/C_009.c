#include <stdio.h>

int main(){
    char *str = "computer science";

    printf("%s \n", str);
    printf("%17s \n", str); // 17자리 오른쪽 정렬
    printf("%-17s \n", str); // 17자리 왼쪽 정렬
    printf("%017s \n", str); // 17자리 오른쪽 정렬, 공백은 0
    printf("%11.5s \n", str); // 11자리, 5글자 출력, 오른쪽 정렬
    printf("%-11.5s \n", str); // 11자리, 5글자 출력, 왼쪽 정렬

    return 0;
}