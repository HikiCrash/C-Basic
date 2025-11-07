#include <stdio.h>

int main(){
    int a = 14, b = 48;

    printf("%d %x\n", a, a); // %x는 16진수 변환, 14 ->  e
    printf("%X\n", a); // %x는 x가 대문자이면 E를 출력.
    printf("%x\n", b); // 16진수 변환 48 -> 30
    printf("%05x %-5x\n", b, b); // 16진수 5자리, 공백은 0으로 / 16진수 5자리, 왼쪽 정렬.

    return 0;
}