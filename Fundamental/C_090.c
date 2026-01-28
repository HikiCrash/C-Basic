#include <stdio.h>

int main(){
    int i = 7, *p;

    p = &i; // i의 주소를 p에 저장.
    
    printf(" i의 값 = %d\n", *p); // p가 가르키는 주소에 있는 값 출력.
    printf(" i의 주소 = %p", p); // p에 저장된 i의 메모리 주소 출력.
    
    return 0;
}