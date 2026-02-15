#include <stdio.h>

int main(){
    char a = 'A', *p, **pp;
    p = &a; // p에 a의 주소 저장.
    pp = &p; // pp에 p의 주소 저장 (이중 포인터).

    printf("*pp : %c \n", **pp); // A. pp > p > a('A')

    return 0;
}