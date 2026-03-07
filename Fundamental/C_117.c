#include <stdio.h>

int main(){
    struct BYTE { // 1바이트를 저장하는 구조체.
        unsigned char l, h; // l은 하위 바이트, h는 상위 바이트.
    };
union body // 같은 메모리를 공유하는 공용체.
{
    struct BYTE byte; // 바이트 단위 접근.
    unsigned short word; // 16비트 정수단위 접근.
} a, b; // 공용체 a, b 선언.

printf("data(16진수4자리) : ");
scanf("%x", &a.word); // 16진수를 입력받아 a.word에 저장.

b.byte.h = a.byte.l; // a의 하위 바이트를 b의 상위 바이트에 저장.
b.byte.l = a.byte.h; // a의 상위 바이트를 b의 하위 바이트에 저장.

printf("%x --> %x\n", a.word, b.word); // 원본 값과 바이트 교환된 값 출력.

return 0; // unsigned는 음수가 없는 정수 범위이다.
}